// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file TelemetryStatus.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _PX4_MSGS_MSG_TELEMETRYSTATUS_H_
#define _PX4_MSGS_MSG_TELEMETRYSTATUS_H_

// TODO Poner en el contexto.

#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif
#else
#define eProsima_user_DllExport
#endif

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(TelemetryStatus_SOURCE)
#define TelemetryStatus_DllAPI __declspec( dllexport )
#else
#define TelemetryStatus_DllAPI __declspec( dllimport )
#endif // TelemetryStatus_SOURCE
#else
#define TelemetryStatus_DllAPI
#endif
#else
#define TelemetryStatus_DllAPI
#endif // _WIN32

namespace eprosima
{
    namespace fastcdr
    {
        class Cdr;
    }
}


namespace px4_msgs
{
    namespace msg
    {
        namespace TelemetryStatus_Constants
        {
            const uint8_t LINK_TYPE_GENERIC = 0;
            const uint8_t LINK_TYPE_UBIQUITY_BULLET = 1;
            const uint8_t LINK_TYPE_WIRE = 2;
            const uint8_t LINK_TYPE_USB = 3;
            const uint8_t LINK_TYPE_IRIDIUM = 4;
            const uint64_t HEARTBEAT_TIMEOUT_US = 2500000;
        }
        /*!
         * @brief This class represents the structure TelemetryStatus defined by the user in the IDL file.
         * @ingroup TELEMETRYSTATUS
         */
        class TelemetryStatus
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport TelemetryStatus();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~TelemetryStatus();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object px4_msgs::msg::TelemetryStatus that will be copied.
             */
            eProsima_user_DllExport TelemetryStatus(const TelemetryStatus &x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object px4_msgs::msg::TelemetryStatus that will be copied.
             */
            eProsima_user_DllExport TelemetryStatus(TelemetryStatus &&x);

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object px4_msgs::msg::TelemetryStatus that will be copied.
             */
            eProsima_user_DllExport TelemetryStatus& operator=(const TelemetryStatus &x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object px4_msgs::msg::TelemetryStatus that will be copied.
             */
            eProsima_user_DllExport TelemetryStatus& operator=(TelemetryStatus &&x);

            /*!
             * @brief This function sets a value in member timestamp
             * @param _timestamp New value for member timestamp
             */
            eProsima_user_DllExport void timestamp(uint64_t _timestamp);

            /*!
             * @brief This function returns the value of member timestamp
             * @return Value of member timestamp
             */
            eProsima_user_DllExport uint64_t timestamp() const;

            /*!
             * @brief This function returns a reference to member timestamp
             * @return Reference to member timestamp
             */
            eProsima_user_DllExport uint64_t& timestamp();

            /*!
             * @brief This function sets a value in member type
             * @param _type New value for member type
             */
            eProsima_user_DllExport void type(uint8_t _type);

            /*!
             * @brief This function returns the value of member type
             * @return Value of member type
             */
            eProsima_user_DllExport uint8_t type() const;

            /*!
             * @brief This function returns a reference to member type
             * @return Reference to member type
             */
            eProsima_user_DllExport uint8_t& type();

            /*!
             * @brief This function sets a value in member mode
             * @param _mode New value for member mode
             */
            eProsima_user_DllExport void mode(uint8_t _mode);

            /*!
             * @brief This function returns the value of member mode
             * @return Value of member mode
             */
            eProsima_user_DllExport uint8_t mode() const;

            /*!
             * @brief This function returns a reference to member mode
             * @return Reference to member mode
             */
            eProsima_user_DllExport uint8_t& mode();

            /*!
             * @brief This function sets a value in member flow_control
             * @param _flow_control New value for member flow_control
             */
            eProsima_user_DllExport void flow_control(bool _flow_control);

            /*!
             * @brief This function returns the value of member flow_control
             * @return Value of member flow_control
             */
            eProsima_user_DllExport bool flow_control() const;

            /*!
             * @brief This function returns a reference to member flow_control
             * @return Reference to member flow_control
             */
            eProsima_user_DllExport bool& flow_control();

            /*!
             * @brief This function sets a value in member forwarding
             * @param _forwarding New value for member forwarding
             */
            eProsima_user_DllExport void forwarding(bool _forwarding);

            /*!
             * @brief This function returns the value of member forwarding
             * @return Value of member forwarding
             */
            eProsima_user_DllExport bool forwarding() const;

            /*!
             * @brief This function returns a reference to member forwarding
             * @return Reference to member forwarding
             */
            eProsima_user_DllExport bool& forwarding();

            /*!
             * @brief This function sets a value in member mavlink_v2
             * @param _mavlink_v2 New value for member mavlink_v2
             */
            eProsima_user_DllExport void mavlink_v2(bool _mavlink_v2);

            /*!
             * @brief This function returns the value of member mavlink_v2
             * @return Value of member mavlink_v2
             */
            eProsima_user_DllExport bool mavlink_v2() const;

            /*!
             * @brief This function returns a reference to member mavlink_v2
             * @return Reference to member mavlink_v2
             */
            eProsima_user_DllExport bool& mavlink_v2();

            /*!
             * @brief This function sets a value in member ftp
             * @param _ftp New value for member ftp
             */
            eProsima_user_DllExport void ftp(bool _ftp);

            /*!
             * @brief This function returns the value of member ftp
             * @return Value of member ftp
             */
            eProsima_user_DllExport bool ftp() const;

            /*!
             * @brief This function returns a reference to member ftp
             * @return Reference to member ftp
             */
            eProsima_user_DllExport bool& ftp();

            /*!
             * @brief This function sets a value in member streams
             * @param _streams New value for member streams
             */
            eProsima_user_DllExport void streams(uint8_t _streams);

            /*!
             * @brief This function returns the value of member streams
             * @return Value of member streams
             */
            eProsima_user_DllExport uint8_t streams() const;

            /*!
             * @brief This function returns a reference to member streams
             * @return Reference to member streams
             */
            eProsima_user_DllExport uint8_t& streams();

            /*!
             * @brief This function sets a value in member data_rate
             * @param _data_rate New value for member data_rate
             */
            eProsima_user_DllExport void data_rate(float _data_rate);

            /*!
             * @brief This function returns the value of member data_rate
             * @return Value of member data_rate
             */
            eProsima_user_DllExport float data_rate() const;

            /*!
             * @brief This function returns a reference to member data_rate
             * @return Reference to member data_rate
             */
            eProsima_user_DllExport float& data_rate();

            /*!
             * @brief This function sets a value in member rate_multiplier
             * @param _rate_multiplier New value for member rate_multiplier
             */
            eProsima_user_DllExport void rate_multiplier(float _rate_multiplier);

            /*!
             * @brief This function returns the value of member rate_multiplier
             * @return Value of member rate_multiplier
             */
            eProsima_user_DllExport float rate_multiplier() const;

            /*!
             * @brief This function returns a reference to member rate_multiplier
             * @return Reference to member rate_multiplier
             */
            eProsima_user_DllExport float& rate_multiplier();

            /*!
             * @brief This function sets a value in member tx_rate_avg
             * @param _tx_rate_avg New value for member tx_rate_avg
             */
            eProsima_user_DllExport void tx_rate_avg(float _tx_rate_avg);

            /*!
             * @brief This function returns the value of member tx_rate_avg
             * @return Value of member tx_rate_avg
             */
            eProsima_user_DllExport float tx_rate_avg() const;

            /*!
             * @brief This function returns a reference to member tx_rate_avg
             * @return Reference to member tx_rate_avg
             */
            eProsima_user_DllExport float& tx_rate_avg();

            /*!
             * @brief This function sets a value in member tx_error_rate_avg
             * @param _tx_error_rate_avg New value for member tx_error_rate_avg
             */
            eProsima_user_DllExport void tx_error_rate_avg(float _tx_error_rate_avg);

            /*!
             * @brief This function returns the value of member tx_error_rate_avg
             * @return Value of member tx_error_rate_avg
             */
            eProsima_user_DllExport float tx_error_rate_avg() const;

            /*!
             * @brief This function returns a reference to member tx_error_rate_avg
             * @return Reference to member tx_error_rate_avg
             */
            eProsima_user_DllExport float& tx_error_rate_avg();

            /*!
             * @brief This function sets a value in member tx_message_count
             * @param _tx_message_count New value for member tx_message_count
             */
            eProsima_user_DllExport void tx_message_count(uint32_t _tx_message_count);

            /*!
             * @brief This function returns the value of member tx_message_count
             * @return Value of member tx_message_count
             */
            eProsima_user_DllExport uint32_t tx_message_count() const;

            /*!
             * @brief This function returns a reference to member tx_message_count
             * @return Reference to member tx_message_count
             */
            eProsima_user_DllExport uint32_t& tx_message_count();

            /*!
             * @brief This function sets a value in member tx_buffer_overruns
             * @param _tx_buffer_overruns New value for member tx_buffer_overruns
             */
            eProsima_user_DllExport void tx_buffer_overruns(uint32_t _tx_buffer_overruns);

            /*!
             * @brief This function returns the value of member tx_buffer_overruns
             * @return Value of member tx_buffer_overruns
             */
            eProsima_user_DllExport uint32_t tx_buffer_overruns() const;

            /*!
             * @brief This function returns a reference to member tx_buffer_overruns
             * @return Reference to member tx_buffer_overruns
             */
            eProsima_user_DllExport uint32_t& tx_buffer_overruns();

            /*!
             * @brief This function sets a value in member rx_rate_avg
             * @param _rx_rate_avg New value for member rx_rate_avg
             */
            eProsima_user_DllExport void rx_rate_avg(float _rx_rate_avg);

            /*!
             * @brief This function returns the value of member rx_rate_avg
             * @return Value of member rx_rate_avg
             */
            eProsima_user_DllExport float rx_rate_avg() const;

            /*!
             * @brief This function returns a reference to member rx_rate_avg
             * @return Reference to member rx_rate_avg
             */
            eProsima_user_DllExport float& rx_rate_avg();

            /*!
             * @brief This function sets a value in member rx_message_count
             * @param _rx_message_count New value for member rx_message_count
             */
            eProsima_user_DllExport void rx_message_count(uint32_t _rx_message_count);

            /*!
             * @brief This function returns the value of member rx_message_count
             * @return Value of member rx_message_count
             */
            eProsima_user_DllExport uint32_t rx_message_count() const;

            /*!
             * @brief This function returns a reference to member rx_message_count
             * @return Reference to member rx_message_count
             */
            eProsima_user_DllExport uint32_t& rx_message_count();

            /*!
             * @brief This function sets a value in member rx_message_lost_count
             * @param _rx_message_lost_count New value for member rx_message_lost_count
             */
            eProsima_user_DllExport void rx_message_lost_count(uint32_t _rx_message_lost_count);

            /*!
             * @brief This function returns the value of member rx_message_lost_count
             * @return Value of member rx_message_lost_count
             */
            eProsima_user_DllExport uint32_t rx_message_lost_count() const;

            /*!
             * @brief This function returns a reference to member rx_message_lost_count
             * @return Reference to member rx_message_lost_count
             */
            eProsima_user_DllExport uint32_t& rx_message_lost_count();

            /*!
             * @brief This function sets a value in member rx_buffer_overruns
             * @param _rx_buffer_overruns New value for member rx_buffer_overruns
             */
            eProsima_user_DllExport void rx_buffer_overruns(uint32_t _rx_buffer_overruns);

            /*!
             * @brief This function returns the value of member rx_buffer_overruns
             * @return Value of member rx_buffer_overruns
             */
            eProsima_user_DllExport uint32_t rx_buffer_overruns() const;

            /*!
             * @brief This function returns a reference to member rx_buffer_overruns
             * @return Reference to member rx_buffer_overruns
             */
            eProsima_user_DllExport uint32_t& rx_buffer_overruns();

            /*!
             * @brief This function sets a value in member rx_parse_errors
             * @param _rx_parse_errors New value for member rx_parse_errors
             */
            eProsima_user_DllExport void rx_parse_errors(uint32_t _rx_parse_errors);

            /*!
             * @brief This function returns the value of member rx_parse_errors
             * @return Value of member rx_parse_errors
             */
            eProsima_user_DllExport uint32_t rx_parse_errors() const;

            /*!
             * @brief This function returns a reference to member rx_parse_errors
             * @return Reference to member rx_parse_errors
             */
            eProsima_user_DllExport uint32_t& rx_parse_errors();

            /*!
             * @brief This function sets a value in member rx_packet_drop_count
             * @param _rx_packet_drop_count New value for member rx_packet_drop_count
             */
            eProsima_user_DllExport void rx_packet_drop_count(uint32_t _rx_packet_drop_count);

            /*!
             * @brief This function returns the value of member rx_packet_drop_count
             * @return Value of member rx_packet_drop_count
             */
            eProsima_user_DllExport uint32_t rx_packet_drop_count() const;

            /*!
             * @brief This function returns a reference to member rx_packet_drop_count
             * @return Reference to member rx_packet_drop_count
             */
            eProsima_user_DllExport uint32_t& rx_packet_drop_count();

            /*!
             * @brief This function sets a value in member rx_message_lost_rate
             * @param _rx_message_lost_rate New value for member rx_message_lost_rate
             */
            eProsima_user_DllExport void rx_message_lost_rate(float _rx_message_lost_rate);

            /*!
             * @brief This function returns the value of member rx_message_lost_rate
             * @return Value of member rx_message_lost_rate
             */
            eProsima_user_DllExport float rx_message_lost_rate() const;

            /*!
             * @brief This function returns a reference to member rx_message_lost_rate
             * @return Reference to member rx_message_lost_rate
             */
            eProsima_user_DllExport float& rx_message_lost_rate();

            /*!
             * @brief This function sets a value in member heartbeat_type_antenna_tracker
             * @param _heartbeat_type_antenna_tracker New value for member heartbeat_type_antenna_tracker
             */
            eProsima_user_DllExport void heartbeat_type_antenna_tracker(bool _heartbeat_type_antenna_tracker);

            /*!
             * @brief This function returns the value of member heartbeat_type_antenna_tracker
             * @return Value of member heartbeat_type_antenna_tracker
             */
            eProsima_user_DllExport bool heartbeat_type_antenna_tracker() const;

            /*!
             * @brief This function returns a reference to member heartbeat_type_antenna_tracker
             * @return Reference to member heartbeat_type_antenna_tracker
             */
            eProsima_user_DllExport bool& heartbeat_type_antenna_tracker();

            /*!
             * @brief This function sets a value in member heartbeat_type_gcs
             * @param _heartbeat_type_gcs New value for member heartbeat_type_gcs
             */
            eProsima_user_DllExport void heartbeat_type_gcs(bool _heartbeat_type_gcs);

            /*!
             * @brief This function returns the value of member heartbeat_type_gcs
             * @return Value of member heartbeat_type_gcs
             */
            eProsima_user_DllExport bool heartbeat_type_gcs() const;

            /*!
             * @brief This function returns a reference to member heartbeat_type_gcs
             * @return Reference to member heartbeat_type_gcs
             */
            eProsima_user_DllExport bool& heartbeat_type_gcs();

            /*!
             * @brief This function sets a value in member heartbeat_type_onboard_controller
             * @param _heartbeat_type_onboard_controller New value for member heartbeat_type_onboard_controller
             */
            eProsima_user_DllExport void heartbeat_type_onboard_controller(bool _heartbeat_type_onboard_controller);

            /*!
             * @brief This function returns the value of member heartbeat_type_onboard_controller
             * @return Value of member heartbeat_type_onboard_controller
             */
            eProsima_user_DllExport bool heartbeat_type_onboard_controller() const;

            /*!
             * @brief This function returns a reference to member heartbeat_type_onboard_controller
             * @return Reference to member heartbeat_type_onboard_controller
             */
            eProsima_user_DllExport bool& heartbeat_type_onboard_controller();

            /*!
             * @brief This function sets a value in member heartbeat_type_gimbal
             * @param _heartbeat_type_gimbal New value for member heartbeat_type_gimbal
             */
            eProsima_user_DllExport void heartbeat_type_gimbal(bool _heartbeat_type_gimbal);

            /*!
             * @brief This function returns the value of member heartbeat_type_gimbal
             * @return Value of member heartbeat_type_gimbal
             */
            eProsima_user_DllExport bool heartbeat_type_gimbal() const;

            /*!
             * @brief This function returns a reference to member heartbeat_type_gimbal
             * @return Reference to member heartbeat_type_gimbal
             */
            eProsima_user_DllExport bool& heartbeat_type_gimbal();

            /*!
             * @brief This function sets a value in member heartbeat_type_adsb
             * @param _heartbeat_type_adsb New value for member heartbeat_type_adsb
             */
            eProsima_user_DllExport void heartbeat_type_adsb(bool _heartbeat_type_adsb);

            /*!
             * @brief This function returns the value of member heartbeat_type_adsb
             * @return Value of member heartbeat_type_adsb
             */
            eProsima_user_DllExport bool heartbeat_type_adsb() const;

            /*!
             * @brief This function returns a reference to member heartbeat_type_adsb
             * @return Reference to member heartbeat_type_adsb
             */
            eProsima_user_DllExport bool& heartbeat_type_adsb();

            /*!
             * @brief This function sets a value in member heartbeat_type_camera
             * @param _heartbeat_type_camera New value for member heartbeat_type_camera
             */
            eProsima_user_DllExport void heartbeat_type_camera(bool _heartbeat_type_camera);

            /*!
             * @brief This function returns the value of member heartbeat_type_camera
             * @return Value of member heartbeat_type_camera
             */
            eProsima_user_DllExport bool heartbeat_type_camera() const;

            /*!
             * @brief This function returns a reference to member heartbeat_type_camera
             * @return Reference to member heartbeat_type_camera
             */
            eProsima_user_DllExport bool& heartbeat_type_camera();

            /*!
             * @brief This function sets a value in member heartbeat_type_parachute
             * @param _heartbeat_type_parachute New value for member heartbeat_type_parachute
             */
            eProsima_user_DllExport void heartbeat_type_parachute(bool _heartbeat_type_parachute);

            /*!
             * @brief This function returns the value of member heartbeat_type_parachute
             * @return Value of member heartbeat_type_parachute
             */
            eProsima_user_DllExport bool heartbeat_type_parachute() const;

            /*!
             * @brief This function returns a reference to member heartbeat_type_parachute
             * @return Reference to member heartbeat_type_parachute
             */
            eProsima_user_DllExport bool& heartbeat_type_parachute();

            /*!
             * @brief This function sets a value in member heartbeat_type_open_drone_id
             * @param _heartbeat_type_open_drone_id New value for member heartbeat_type_open_drone_id
             */
            eProsima_user_DllExport void heartbeat_type_open_drone_id(bool _heartbeat_type_open_drone_id);

            /*!
             * @brief This function returns the value of member heartbeat_type_open_drone_id
             * @return Value of member heartbeat_type_open_drone_id
             */
            eProsima_user_DllExport bool heartbeat_type_open_drone_id() const;

            /*!
             * @brief This function returns a reference to member heartbeat_type_open_drone_id
             * @return Reference to member heartbeat_type_open_drone_id
             */
            eProsima_user_DllExport bool& heartbeat_type_open_drone_id();

            /*!
             * @brief This function sets a value in member heartbeat_component_telemetry_radio
             * @param _heartbeat_component_telemetry_radio New value for member heartbeat_component_telemetry_radio
             */
            eProsima_user_DllExport void heartbeat_component_telemetry_radio(bool _heartbeat_component_telemetry_radio);

            /*!
             * @brief This function returns the value of member heartbeat_component_telemetry_radio
             * @return Value of member heartbeat_component_telemetry_radio
             */
            eProsima_user_DllExport bool heartbeat_component_telemetry_radio() const;

            /*!
             * @brief This function returns a reference to member heartbeat_component_telemetry_radio
             * @return Reference to member heartbeat_component_telemetry_radio
             */
            eProsima_user_DllExport bool& heartbeat_component_telemetry_radio();

            /*!
             * @brief This function sets a value in member heartbeat_component_log
             * @param _heartbeat_component_log New value for member heartbeat_component_log
             */
            eProsima_user_DllExport void heartbeat_component_log(bool _heartbeat_component_log);

            /*!
             * @brief This function returns the value of member heartbeat_component_log
             * @return Value of member heartbeat_component_log
             */
            eProsima_user_DllExport bool heartbeat_component_log() const;

            /*!
             * @brief This function returns a reference to member heartbeat_component_log
             * @return Reference to member heartbeat_component_log
             */
            eProsima_user_DllExport bool& heartbeat_component_log();

            /*!
             * @brief This function sets a value in member heartbeat_component_osd
             * @param _heartbeat_component_osd New value for member heartbeat_component_osd
             */
            eProsima_user_DllExport void heartbeat_component_osd(bool _heartbeat_component_osd);

            /*!
             * @brief This function returns the value of member heartbeat_component_osd
             * @return Value of member heartbeat_component_osd
             */
            eProsima_user_DllExport bool heartbeat_component_osd() const;

            /*!
             * @brief This function returns a reference to member heartbeat_component_osd
             * @return Reference to member heartbeat_component_osd
             */
            eProsima_user_DllExport bool& heartbeat_component_osd();

            /*!
             * @brief This function sets a value in member heartbeat_component_obstacle_avoidance
             * @param _heartbeat_component_obstacle_avoidance New value for member heartbeat_component_obstacle_avoidance
             */
            eProsima_user_DllExport void heartbeat_component_obstacle_avoidance(bool _heartbeat_component_obstacle_avoidance);

            /*!
             * @brief This function returns the value of member heartbeat_component_obstacle_avoidance
             * @return Value of member heartbeat_component_obstacle_avoidance
             */
            eProsima_user_DllExport bool heartbeat_component_obstacle_avoidance() const;

            /*!
             * @brief This function returns a reference to member heartbeat_component_obstacle_avoidance
             * @return Reference to member heartbeat_component_obstacle_avoidance
             */
            eProsima_user_DllExport bool& heartbeat_component_obstacle_avoidance();

            /*!
             * @brief This function sets a value in member heartbeat_component_vio
             * @param _heartbeat_component_vio New value for member heartbeat_component_vio
             */
            eProsima_user_DllExport void heartbeat_component_vio(bool _heartbeat_component_vio);

            /*!
             * @brief This function returns the value of member heartbeat_component_vio
             * @return Value of member heartbeat_component_vio
             */
            eProsima_user_DllExport bool heartbeat_component_vio() const;

            /*!
             * @brief This function returns a reference to member heartbeat_component_vio
             * @return Reference to member heartbeat_component_vio
             */
            eProsima_user_DllExport bool& heartbeat_component_vio();

            /*!
             * @brief This function sets a value in member heartbeat_component_pairing_manager
             * @param _heartbeat_component_pairing_manager New value for member heartbeat_component_pairing_manager
             */
            eProsima_user_DllExport void heartbeat_component_pairing_manager(bool _heartbeat_component_pairing_manager);

            /*!
             * @brief This function returns the value of member heartbeat_component_pairing_manager
             * @return Value of member heartbeat_component_pairing_manager
             */
            eProsima_user_DllExport bool heartbeat_component_pairing_manager() const;

            /*!
             * @brief This function returns a reference to member heartbeat_component_pairing_manager
             * @return Reference to member heartbeat_component_pairing_manager
             */
            eProsima_user_DllExport bool& heartbeat_component_pairing_manager();

            /*!
             * @brief This function sets a value in member heartbeat_component_udp_bridge
             * @param _heartbeat_component_udp_bridge New value for member heartbeat_component_udp_bridge
             */
            eProsima_user_DllExport void heartbeat_component_udp_bridge(bool _heartbeat_component_udp_bridge);

            /*!
             * @brief This function returns the value of member heartbeat_component_udp_bridge
             * @return Value of member heartbeat_component_udp_bridge
             */
            eProsima_user_DllExport bool heartbeat_component_udp_bridge() const;

            /*!
             * @brief This function returns a reference to member heartbeat_component_udp_bridge
             * @return Reference to member heartbeat_component_udp_bridge
             */
            eProsima_user_DllExport bool& heartbeat_component_udp_bridge();

            /*!
             * @brief This function sets a value in member heartbeat_component_uart_bridge
             * @param _heartbeat_component_uart_bridge New value for member heartbeat_component_uart_bridge
             */
            eProsima_user_DllExport void heartbeat_component_uart_bridge(bool _heartbeat_component_uart_bridge);

            /*!
             * @brief This function returns the value of member heartbeat_component_uart_bridge
             * @return Value of member heartbeat_component_uart_bridge
             */
            eProsima_user_DllExport bool heartbeat_component_uart_bridge() const;

            /*!
             * @brief This function returns a reference to member heartbeat_component_uart_bridge
             * @return Reference to member heartbeat_component_uart_bridge
             */
            eProsima_user_DllExport bool& heartbeat_component_uart_bridge();

            /*!
             * @brief This function sets a value in member avoidance_system_healthy
             * @param _avoidance_system_healthy New value for member avoidance_system_healthy
             */
            eProsima_user_DllExport void avoidance_system_healthy(bool _avoidance_system_healthy);

            /*!
             * @brief This function returns the value of member avoidance_system_healthy
             * @return Value of member avoidance_system_healthy
             */
            eProsima_user_DllExport bool avoidance_system_healthy() const;

            /*!
             * @brief This function returns a reference to member avoidance_system_healthy
             * @return Reference to member avoidance_system_healthy
             */
            eProsima_user_DllExport bool& avoidance_system_healthy();

            /*!
             * @brief This function sets a value in member open_drone_id_system_healthy
             * @param _open_drone_id_system_healthy New value for member open_drone_id_system_healthy
             */
            eProsima_user_DllExport void open_drone_id_system_healthy(bool _open_drone_id_system_healthy);

            /*!
             * @brief This function returns the value of member open_drone_id_system_healthy
             * @return Value of member open_drone_id_system_healthy
             */
            eProsima_user_DllExport bool open_drone_id_system_healthy() const;

            /*!
             * @brief This function returns a reference to member open_drone_id_system_healthy
             * @return Reference to member open_drone_id_system_healthy
             */
            eProsima_user_DllExport bool& open_drone_id_system_healthy();

            /*!
             * @brief This function sets a value in member parachute_system_healthy
             * @param _parachute_system_healthy New value for member parachute_system_healthy
             */
            eProsima_user_DllExport void parachute_system_healthy(bool _parachute_system_healthy);

            /*!
             * @brief This function returns the value of member parachute_system_healthy
             * @return Value of member parachute_system_healthy
             */
            eProsima_user_DllExport bool parachute_system_healthy() const;

            /*!
             * @brief This function returns a reference to member parachute_system_healthy
             * @return Reference to member parachute_system_healthy
             */
            eProsima_user_DllExport bool& parachute_system_healthy();


            /*!
             * @brief This function returns the maximum serialized size of an object
             * depending on the buffer alignment.
             * @param current_alignment Buffer alignment.
             * @return Maximum serialized size.
             */
            eProsima_user_DllExport static size_t getMaxCdrSerializedSize(size_t current_alignment = 0);

            /*!
             * @brief This function returns the serialized size of a data depending on the buffer alignment.
             * @param data Data which is calculated its serialized size.
             * @param current_alignment Buffer alignment.
             * @return Serialized size.
             */
            eProsima_user_DllExport static size_t getCdrSerializedSize(const px4_msgs::msg::TelemetryStatus& data, size_t current_alignment = 0);


            /*!
             * @brief This function serializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void serialize(eprosima::fastcdr::Cdr &cdr) const;

            /*!
             * @brief This function deserializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void deserialize(eprosima::fastcdr::Cdr &cdr);



            /*!
             * @brief This function returns the maximum serialized size of the Key of an object
             * depending on the buffer alignment.
             * @param current_alignment Buffer alignment.
             * @return Maximum serialized size.
             */
            eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(size_t current_alignment = 0);

            /*!
             * @brief This function tells you if the Key has been defined for this type
             */
            eProsima_user_DllExport static bool isKeyDefined();

            /*!
             * @brief This function serializes the key members of an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void serializeKey(eprosima::fastcdr::Cdr &cdr) const;

        private:
            uint64_t m_timestamp;
            uint8_t m_type;
            uint8_t m_mode;
            bool m_flow_control;
            bool m_forwarding;
            bool m_mavlink_v2;
            bool m_ftp;
            uint8_t m_streams;
            float m_data_rate;
            float m_rate_multiplier;
            float m_tx_rate_avg;
            float m_tx_error_rate_avg;
            uint32_t m_tx_message_count;
            uint32_t m_tx_buffer_overruns;
            float m_rx_rate_avg;
            uint32_t m_rx_message_count;
            uint32_t m_rx_message_lost_count;
            uint32_t m_rx_buffer_overruns;
            uint32_t m_rx_parse_errors;
            uint32_t m_rx_packet_drop_count;
            float m_rx_message_lost_rate;
            bool m_heartbeat_type_antenna_tracker;
            bool m_heartbeat_type_gcs;
            bool m_heartbeat_type_onboard_controller;
            bool m_heartbeat_type_gimbal;
            bool m_heartbeat_type_adsb;
            bool m_heartbeat_type_camera;
            bool m_heartbeat_type_parachute;
            bool m_heartbeat_type_open_drone_id;
            bool m_heartbeat_component_telemetry_radio;
            bool m_heartbeat_component_log;
            bool m_heartbeat_component_osd;
            bool m_heartbeat_component_obstacle_avoidance;
            bool m_heartbeat_component_vio;
            bool m_heartbeat_component_pairing_manager;
            bool m_heartbeat_component_udp_bridge;
            bool m_heartbeat_component_uart_bridge;
            bool m_avoidance_system_healthy;
            bool m_open_drone_id_system_healthy;
            bool m_parachute_system_healthy;
        };
    }
}

#endif // _PX4_MSGS_MSG_TELEMETRYSTATUS_H_