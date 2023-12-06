/*
 *
 *    Copyright (c) 2023 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#pragma once

#include <crypto/CHIPCryptoPAL.h>
#include <lib/core/CHIPConfig.h>
#include <lib/core/DataModelTypes.h>
#include <lib/core/ScopedNodeId.h>
#include <lib/support/CodeUtils.h>
#include <stddef.h>

namespace {
constexpr size_t kUserActiveModeTriggerInstructionSize = 128;
} // namespace

namespace chip {
namespace app {

struct ICDClientInfo
{
    ScopedNodeId peer_node;
    uint32_t start_icd_counter                                                       = 0;
    uint32_t offset                                                                  = 0;
    uint64_t monitored_subject                                                       = static_cast<uint64_t>(0);
    uint32_t user_active_mode_trigger_hint                                           = 0;
    char user_active_mode_trigger_instruction[kUserActiveModeTriggerInstructionSize] = { 0 };
    bool has_instruction                                                             = false;
    Crypto::Aes128BitsKeyHandle shared_key                                           = Crypto::Aes128BitsKeyHandle();

    ICDClientInfo() {}
    ICDClientInfo(const ICDClientInfo & other) { *this = other; }

    ICDClientInfo & operator=(const ICDClientInfo & other)
    {
        peer_node                     = other.peer_node;
        start_icd_counter             = other.start_icd_counter;
        offset                        = other.offset;
        monitored_subject             = other.monitored_subject;
        user_active_mode_trigger_hint = other.user_active_mode_trigger_hint;
        if (other.has_instruction)
        {
            memcpy(user_active_mode_trigger_instruction, other.user_active_mode_trigger_instruction,
                   kUserActiveModeTriggerInstructionSize);
        }
        has_instruction = other.has_instruction;
        ByteSpan buf(other.shared_key.As<Crypto::Symmetric128BitsKeyByteArray>());
        memcpy(shared_key.AsMutable<Crypto::Symmetric128BitsKeyByteArray>(), buf.data(),
               sizeof(Crypto::Symmetric128BitsKeyByteArray));
        return *this;
    }
};

} // namespace app
} // namespace chip
