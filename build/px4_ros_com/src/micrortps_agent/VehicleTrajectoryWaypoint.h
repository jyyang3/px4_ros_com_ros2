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
 * @file VehicleTrajectoryWaypoint.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _PX4_MSGS_MSG_VEHICLETRAJECTORYWAYPOINT_H_
#define _PX4_MSGS_MSG_VEHICLETRAJECTORYWAYPOINT_H_

// TODO Poner en el contexto.
#include "TrajectoryWaypoint.h"

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
#if defined(VehicleTrajectoryWaypoint_SOURCE)
#define VehicleTrajectoryWaypoint_DllAPI __declspec( dllexport )
#else
#define VehicleTrajectoryWaypoint_DllAPI __declspec( dllimport )
#endif // VehicleTrajectoryWaypoint_SOURCE
#else
#define VehicleTrajectoryWaypoint_DllAPI
#endif
#else
#define VehicleTrajectoryWaypoint_DllAPI
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
        typedef px4_msgs::msg::TrajectoryWaypoint px4_msgs__msg__TrajectoryWaypoint;
        typedef std::array<px4_msgs::msg::px4_msgs__msg__TrajectoryWaypoint, 5> px4_msgs__msg__TrajectoryWaypoint__5;
        namespace VehicleTrajectoryWaypoint_Constants
        {
            const uint8_t MAV_TRAJECTORY_REPRESENTATION_WAYPOINTS = 0;
            const uint8_t POINT_0 = 0;
            const uint8_t POINT_1 = 1;
            const uint8_t POINT_2 = 2;
            const uint8_t POINT_3 = 3;
            const uint8_t POINT_4 = 4;
            const uint8_t NUMBER_POINTS = 5;
        }
        /*!
         * @brief This class represents the structure VehicleTrajectoryWaypoint defined by the user in the IDL file.
         * @ingroup VEHICLETRAJECTORYWAYPOINT
         */
        class VehicleTrajectoryWaypoint
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport VehicleTrajectoryWaypoint();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~VehicleTrajectoryWaypoint();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object px4_msgs::msg::VehicleTrajectoryWaypoint that will be copied.
             */
            eProsima_user_DllExport VehicleTrajectoryWaypoint(const VehicleTrajectoryWaypoint &x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object px4_msgs::msg::VehicleTrajectoryWaypoint that will be copied.
             */
            eProsima_user_DllExport VehicleTrajectoryWaypoint(VehicleTrajectoryWaypoint &&x);

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object px4_msgs::msg::VehicleTrajectoryWaypoint that will be copied.
             */
            eProsima_user_DllExport VehicleTrajectoryWaypoint& operator=(const VehicleTrajectoryWaypoint &x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object px4_msgs::msg::VehicleTrajectoryWaypoint that will be copied.
             */
            eProsima_user_DllExport VehicleTrajectoryWaypoint& operator=(VehicleTrajectoryWaypoint &&x);

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
             * @brief This function copies the value in member waypoints
             * @param _waypoints New value to be copied in member waypoints
             */
            eProsima_user_DllExport void waypoints(const px4_msgs::msg::px4_msgs__msg__TrajectoryWaypoint__5 &_waypoints);

            /*!
             * @brief This function moves the value in member waypoints
             * @param _waypoints New value to be moved in member waypoints
             */
            eProsima_user_DllExport void waypoints(px4_msgs::msg::px4_msgs__msg__TrajectoryWaypoint__5 &&_waypoints);

            /*!
             * @brief This function returns a constant reference to member waypoints
             * @return Constant reference to member waypoints
             */
            eProsima_user_DllExport const px4_msgs::msg::px4_msgs__msg__TrajectoryWaypoint__5& waypoints() const;

            /*!
             * @brief This function returns a reference to member waypoints
             * @return Reference to member waypoints
             */
            eProsima_user_DllExport px4_msgs::msg::px4_msgs__msg__TrajectoryWaypoint__5& waypoints();

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
            eProsima_user_DllExport static size_t getCdrSerializedSize(const px4_msgs::msg::VehicleTrajectoryWaypoint& data, size_t current_alignment = 0);


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
            px4_msgs::msg::px4_msgs__msg__TrajectoryWaypoint__5 m_waypoints;
        };
    }
}

#endif // _PX4_MSGS_MSG_VEHICLETRAJECTORYWAYPOINT_H_