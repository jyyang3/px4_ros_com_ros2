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
 * @file VehicleAttitudeSetpoint.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _PX4_MSGS_MSG_VEHICLEATTITUDESETPOINT_H_
#define _PX4_MSGS_MSG_VEHICLEATTITUDESETPOINT_H_

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
#if defined(VehicleAttitudeSetpoint_SOURCE)
#define VehicleAttitudeSetpoint_DllAPI __declspec( dllexport )
#else
#define VehicleAttitudeSetpoint_DllAPI __declspec( dllimport )
#endif // VehicleAttitudeSetpoint_SOURCE
#else
#define VehicleAttitudeSetpoint_DllAPI
#endif
#else
#define VehicleAttitudeSetpoint_DllAPI
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
        typedef std::array<float, 4> float__4;
        typedef std::array<float, 3> float__3;
        namespace VehicleAttitudeSetpoint_Constants
        {
            const uint8_t FLAPS_OFF = 0;
            const uint8_t FLAPS_LAND = 1;
            const uint8_t FLAPS_TAKEOFF = 2;
            const uint8_t SPOILERS_OFF = 0;
            const uint8_t SPOILERS_LAND = 1;
            const uint8_t SPOILERS_DESCEND = 2;
        }
        /*!
         * @brief This class represents the structure VehicleAttitudeSetpoint defined by the user in the IDL file.
         * @ingroup VEHICLEATTITUDESETPOINT
         */
        class VehicleAttitudeSetpoint
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport VehicleAttitudeSetpoint();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~VehicleAttitudeSetpoint();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object px4_msgs::msg::VehicleAttitudeSetpoint that will be copied.
             */
            eProsima_user_DllExport VehicleAttitudeSetpoint(const VehicleAttitudeSetpoint &x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object px4_msgs::msg::VehicleAttitudeSetpoint that will be copied.
             */
            eProsima_user_DllExport VehicleAttitudeSetpoint(VehicleAttitudeSetpoint &&x);

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object px4_msgs::msg::VehicleAttitudeSetpoint that will be copied.
             */
            eProsima_user_DllExport VehicleAttitudeSetpoint& operator=(const VehicleAttitudeSetpoint &x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object px4_msgs::msg::VehicleAttitudeSetpoint that will be copied.
             */
            eProsima_user_DllExport VehicleAttitudeSetpoint& operator=(VehicleAttitudeSetpoint &&x);

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
             * @brief This function sets a value in member roll_body
             * @param _roll_body New value for member roll_body
             */
            eProsima_user_DllExport void roll_body(float _roll_body);

            /*!
             * @brief This function returns the value of member roll_body
             * @return Value of member roll_body
             */
            eProsima_user_DllExport float roll_body() const;

            /*!
             * @brief This function returns a reference to member roll_body
             * @return Reference to member roll_body
             */
            eProsima_user_DllExport float& roll_body();

            /*!
             * @brief This function sets a value in member pitch_body
             * @param _pitch_body New value for member pitch_body
             */
            eProsima_user_DllExport void pitch_body(float _pitch_body);

            /*!
             * @brief This function returns the value of member pitch_body
             * @return Value of member pitch_body
             */
            eProsima_user_DllExport float pitch_body() const;

            /*!
             * @brief This function returns a reference to member pitch_body
             * @return Reference to member pitch_body
             */
            eProsima_user_DllExport float& pitch_body();

            /*!
             * @brief This function sets a value in member yaw_body
             * @param _yaw_body New value for member yaw_body
             */
            eProsima_user_DllExport void yaw_body(float _yaw_body);

            /*!
             * @brief This function returns the value of member yaw_body
             * @return Value of member yaw_body
             */
            eProsima_user_DllExport float yaw_body() const;

            /*!
             * @brief This function returns a reference to member yaw_body
             * @return Reference to member yaw_body
             */
            eProsima_user_DllExport float& yaw_body();

            /*!
             * @brief This function sets a value in member yaw_sp_move_rate
             * @param _yaw_sp_move_rate New value for member yaw_sp_move_rate
             */
            eProsima_user_DllExport void yaw_sp_move_rate(float _yaw_sp_move_rate);

            /*!
             * @brief This function returns the value of member yaw_sp_move_rate
             * @return Value of member yaw_sp_move_rate
             */
            eProsima_user_DllExport float yaw_sp_move_rate() const;

            /*!
             * @brief This function returns a reference to member yaw_sp_move_rate
             * @return Reference to member yaw_sp_move_rate
             */
            eProsima_user_DllExport float& yaw_sp_move_rate();

            /*!
             * @brief This function copies the value in member q_d
             * @param _q_d New value to be copied in member q_d
             */
            eProsima_user_DllExport void q_d(const px4_msgs::msg::float__4 &_q_d);

            /*!
             * @brief This function moves the value in member q_d
             * @param _q_d New value to be moved in member q_d
             */
            eProsima_user_DllExport void q_d(px4_msgs::msg::float__4 &&_q_d);

            /*!
             * @brief This function returns a constant reference to member q_d
             * @return Constant reference to member q_d
             */
            eProsima_user_DllExport const px4_msgs::msg::float__4& q_d() const;

            /*!
             * @brief This function returns a reference to member q_d
             * @return Reference to member q_d
             */
            eProsima_user_DllExport px4_msgs::msg::float__4& q_d();
            /*!
             * @brief This function copies the value in member thrust_body
             * @param _thrust_body New value to be copied in member thrust_body
             */
            eProsima_user_DllExport void thrust_body(const px4_msgs::msg::float__3 &_thrust_body);

            /*!
             * @brief This function moves the value in member thrust_body
             * @param _thrust_body New value to be moved in member thrust_body
             */
            eProsima_user_DllExport void thrust_body(px4_msgs::msg::float__3 &&_thrust_body);

            /*!
             * @brief This function returns a constant reference to member thrust_body
             * @return Constant reference to member thrust_body
             */
            eProsima_user_DllExport const px4_msgs::msg::float__3& thrust_body() const;

            /*!
             * @brief This function returns a reference to member thrust_body
             * @return Reference to member thrust_body
             */
            eProsima_user_DllExport px4_msgs::msg::float__3& thrust_body();
            /*!
             * @brief This function sets a value in member reset_rate_integrals
             * @param _reset_rate_integrals New value for member reset_rate_integrals
             */
            eProsima_user_DllExport void reset_rate_integrals(bool _reset_rate_integrals);

            /*!
             * @brief This function returns the value of member reset_rate_integrals
             * @return Value of member reset_rate_integrals
             */
            eProsima_user_DllExport bool reset_rate_integrals() const;

            /*!
             * @brief This function returns a reference to member reset_rate_integrals
             * @return Reference to member reset_rate_integrals
             */
            eProsima_user_DllExport bool& reset_rate_integrals();

            /*!
             * @brief This function sets a value in member fw_control_yaw
             * @param _fw_control_yaw New value for member fw_control_yaw
             */
            eProsima_user_DllExport void fw_control_yaw(bool _fw_control_yaw);

            /*!
             * @brief This function returns the value of member fw_control_yaw
             * @return Value of member fw_control_yaw
             */
            eProsima_user_DllExport bool fw_control_yaw() const;

            /*!
             * @brief This function returns a reference to member fw_control_yaw
             * @return Reference to member fw_control_yaw
             */
            eProsima_user_DllExport bool& fw_control_yaw();

            /*!
             * @brief This function sets a value in member apply_flaps
             * @param _apply_flaps New value for member apply_flaps
             */
            eProsima_user_DllExport void apply_flaps(uint8_t _apply_flaps);

            /*!
             * @brief This function returns the value of member apply_flaps
             * @return Value of member apply_flaps
             */
            eProsima_user_DllExport uint8_t apply_flaps() const;

            /*!
             * @brief This function returns a reference to member apply_flaps
             * @return Reference to member apply_flaps
             */
            eProsima_user_DllExport uint8_t& apply_flaps();

            /*!
             * @brief This function sets a value in member apply_spoilers
             * @param _apply_spoilers New value for member apply_spoilers
             */
            eProsima_user_DllExport void apply_spoilers(uint8_t _apply_spoilers);

            /*!
             * @brief This function returns the value of member apply_spoilers
             * @return Value of member apply_spoilers
             */
            eProsima_user_DllExport uint8_t apply_spoilers() const;

            /*!
             * @brief This function returns a reference to member apply_spoilers
             * @return Reference to member apply_spoilers
             */
            eProsima_user_DllExport uint8_t& apply_spoilers();


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
            eProsima_user_DllExport static size_t getCdrSerializedSize(const px4_msgs::msg::VehicleAttitudeSetpoint& data, size_t current_alignment = 0);


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
            float m_roll_body;
            float m_pitch_body;
            float m_yaw_body;
            float m_yaw_sp_move_rate;
            px4_msgs::msg::float__4 m_q_d;
            px4_msgs::msg::float__3 m_thrust_body;
            bool m_reset_rate_integrals;
            bool m_fw_control_yaw;
            uint8_t m_apply_flaps;
            uint8_t m_apply_spoilers;
        };
    }
}

#endif // _PX4_MSGS_MSG_VEHICLEATTITUDESETPOINT_H_