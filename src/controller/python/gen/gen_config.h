/*
 *
 *    Copyright (c) 2021 Project CHIP Authors
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

// THIS FILE IS GENERATED BY ZAP

// Prevent multiple inclusion
#pragma once

// User options for plugin Binding Table Library
#define EMBER_BINDING_TABLE_SIZE 10

/**** Network Section ****/
#define EMBER_SUPPORTED_NETWORKS (1)

#define EMBER_APS_UNICAST_MESSAGE_COUNT 10

/**** Cluster endpoint counts ****/
#define EMBER_AF_ACCOUNT_LOGIN_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_APPLICATION_BASIC_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_APPLICATION_LAUNCHER_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_AUDIO_OUTPUT_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_BARRIER_CONTROL_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_BASIC_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_BINDING_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_COLOR_CONTROL_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_CONTENT_LAUNCH_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_DESCRIPTOR_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_DOOR_LOCK_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_GENERAL_COMMISSIONING_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_GROUP_KEY_MANAGEMENT_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_GROUPS_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_IDENTIFY_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_KEYPAD_INPUT_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_LEVEL_CONTROL_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_LOW_POWER_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_MEDIA_INPUT_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_MEDIA_PLAYBACK_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_NETWORK_COMMISSIONING_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_ON_OFF_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_OPERATIONAL_CREDENTIALS_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_PUMP_CONFIG_CONTROL_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_SCENES_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_SWITCH_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_TV_CHANNEL_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_TARGET_NAVIGATOR_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_TEMP_MEASUREMENT_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_TEST_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_THERMOSTAT_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_TRUSTED_ROOT_CERTIFICATES_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_WAKE_ON_LAN_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_WINDOW_COVERING_CLUSTER_CLIENT_ENDPOINT_COUNT (1)

/**** Cluster Plugins ****/

// Use this macro to check if the client side of the Account Login cluster is included
#define ZCL_USING_ACCOUNT_LOGIN_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_ACCOUNT_LOGIN_CLIENT

// Use this macro to check if the client side of the Application Basic cluster is included
#define ZCL_USING_APPLICATION_BASIC_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_APPLICATION_BASIC_CLIENT

// Use this macro to check if the client side of the Application Launcher cluster is included
#define ZCL_USING_APPLICATION_LAUNCHER_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_APPLICATION_LAUNCHER_CLIENT

// Use this macro to check if the client side of the Audio Output cluster is included
#define ZCL_USING_AUDIO_OUTPUT_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_AUDIO_OUTPUT_CLIENT

// Use this macro to check if the client side of the Barrier Control cluster is included
#define ZCL_USING_BARRIER_CONTROL_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_BARRIER_CONTROL_CLIENT

// Use this macro to check if the client side of the Basic cluster is included
#define ZCL_USING_BASIC_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_BASIC_CLIENT

// Use this macro to check if the client side of the Binding cluster is included
#define ZCL_USING_BINDING_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_BINDING_CLIENT

// Use this macro to check if the client side of the Color Control cluster is included
#define ZCL_USING_COLOR_CONTROL_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_COLOR_CONTROL_CLIENT

// Use this macro to check if the client side of the Content Launch cluster is included
#define ZCL_USING_CONTENT_LAUNCH_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_CONTENT_LAUNCH_CLIENT

// Use this macro to check if the client side of the Descriptor cluster is included
#define ZCL_USING_DESCRIPTOR_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_DESCRIPTOR_CLIENT

// Use this macro to check if the client side of the Door Lock cluster is included
#define ZCL_USING_DOOR_LOCK_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_DOOR_LOCK_CLIENT

// Use this macro to check if the client side of the General Commissioning cluster is included
#define ZCL_USING_GENERAL_COMMISSIONING_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_GENERAL_COMMISSIONING_CLIENT

// Use this macro to check if the client side of the Group Key Management cluster is included
#define ZCL_USING_GROUP_KEY_MANAGEMENT_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_GROUP_KEY_MANAGEMENT_CLIENT

// Use this macro to check if the client side of the Groups cluster is included
#define ZCL_USING_GROUPS_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_GROUPS_CLIENT

// Use this macro to check if the client side of the Identify cluster is included
#define ZCL_USING_IDENTIFY_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_IDENTIFY_CLIENT

// Use this macro to check if the client side of the Keypad Input cluster is included
#define ZCL_USING_KEYPAD_INPUT_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_KEYPAD_INPUT_CLIENT

// Use this macro to check if the client side of the Level Control cluster is included
#define ZCL_USING_LEVEL_CONTROL_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_LEVEL_CONTROL_CLIENT

// Use this macro to check if the client side of the Low Power cluster is included
#define ZCL_USING_LOW_POWER_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_LOW_POWER_CLIENT

// Use this macro to check if the client side of the Media Input cluster is included
#define ZCL_USING_MEDIA_INPUT_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_MEDIA_INPUT_CLIENT

// Use this macro to check if the client side of the Media Playback cluster is included
#define ZCL_USING_MEDIA_PLAYBACK_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_MEDIA_PLAYBACK_CLIENT

// Use this macro to check if the client side of the Network Commissioning cluster is included
#define ZCL_USING_NETWORK_COMMISSIONING_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_NETWORK_COMMISSIONING_CLIENT

// Use this macro to check if the client side of the On/off cluster is included
#define ZCL_USING_ON_OFF_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_ON_OFF_CLIENT

// Use this macro to check if the client side of the Operational Credentials cluster is included
#define ZCL_USING_OPERATIONAL_CREDENTIALS_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_OPERATIONAL_CREDENTIALS_CLIENT

// Use this macro to check if the client side of the Pump Configuration and Control cluster is included
#define ZCL_USING_PUMP_CONFIG_CONTROL_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_PUMP_CONFIGURATION_AND_CONTROL_CLIENT

// Use this macro to check if the client side of the Scenes cluster is included
#define ZCL_USING_SCENES_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_SCENES_CLIENT

// Use this macro to check if the client side of the Switch cluster is included
#define ZCL_USING_SWITCH_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_SWITCH_CLIENT

// Use this macro to check if the client side of the TV Channel cluster is included
#define ZCL_USING_TV_CHANNEL_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_TV_CHANNEL_CLIENT

// Use this macro to check if the client side of the Target Navigator cluster is included
#define ZCL_USING_TARGET_NAVIGATOR_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_TARGET_NAVIGATOR_CLIENT

// Use this macro to check if the client side of the Temperature Measurement cluster is included
#define ZCL_USING_TEMP_MEASUREMENT_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_TEMPERATURE_MEASUREMENT_CLIENT

// Use this macro to check if the client side of the Test Cluster cluster is included
#define ZCL_USING_TEST_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_TEST_CLUSTER_CLIENT

// Use this macro to check if the client side of the Thermostat cluster is included
#define ZCL_USING_THERMOSTAT_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_THERMOSTAT_CLIENT

// Use this macro to check if the client side of the Trusted Root Certificates cluster is included
#define ZCL_USING_TRUSTED_ROOT_CERTIFICATES_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_TRUSTED_ROOT_CERTIFICATES_CLIENT

// Use this macro to check if the client side of the Wake on LAN cluster is included
#define ZCL_USING_WAKE_ON_LAN_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_WAKE_ON_LAN_CLIENT

// Use this macro to check if the client side of the Window Covering cluster is included
#define ZCL_USING_WINDOW_COVERING_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_WINDOW_COVERING_CLIENT
