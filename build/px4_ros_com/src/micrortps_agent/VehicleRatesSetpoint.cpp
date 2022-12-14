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
 * @file VehicleRatesSetpoint.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "VehicleRatesSetpoint.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>


px4_msgs::msg::VehicleRatesSetpoint::VehicleRatesSetpoint()
{
    // m_timestamp com.eprosima.idl.parser.typecode.PrimitiveTypeCode@4a00d9cf
    m_timestamp = 0;
    // m_roll com.eprosima.idl.parser.typecode.PrimitiveTypeCode@6736fa8d
    m_roll = 0.0;
    // m_pitch com.eprosima.idl.parser.typecode.PrimitiveTypeCode@52815fa3
    m_pitch = 0.0;
    // m_yaw com.eprosima.idl.parser.typecode.PrimitiveTypeCode@50313382
    m_yaw = 0.0;
    // m_thrust_body com.eprosima.idl.parser.typecode.AliasTypeCode@1cb346ea
    memset(&m_thrust_body, 0, (3) * 4);

}

px4_msgs::msg::VehicleRatesSetpoint::~VehicleRatesSetpoint()
{





}

px4_msgs::msg::VehicleRatesSetpoint::VehicleRatesSetpoint(const VehicleRatesSetpoint &x)
{
    m_timestamp = x.m_timestamp;
    m_roll = x.m_roll;
    m_pitch = x.m_pitch;
    m_yaw = x.m_yaw;
    m_thrust_body = x.m_thrust_body;
}

px4_msgs::msg::VehicleRatesSetpoint::VehicleRatesSetpoint(VehicleRatesSetpoint &&x)
{
    m_timestamp = x.m_timestamp;
    m_roll = x.m_roll;
    m_pitch = x.m_pitch;
    m_yaw = x.m_yaw;
    m_thrust_body = std::move(x.m_thrust_body);
}

px4_msgs::msg::VehicleRatesSetpoint& px4_msgs::msg::VehicleRatesSetpoint::operator=(const VehicleRatesSetpoint &x)
{

    m_timestamp = x.m_timestamp;
    m_roll = x.m_roll;
    m_pitch = x.m_pitch;
    m_yaw = x.m_yaw;
    m_thrust_body = x.m_thrust_body;

    return *this;
}

px4_msgs::msg::VehicleRatesSetpoint& px4_msgs::msg::VehicleRatesSetpoint::operator=(VehicleRatesSetpoint &&x)
{

    m_timestamp = x.m_timestamp;
    m_roll = x.m_roll;
    m_pitch = x.m_pitch;
    m_yaw = x.m_yaw;
    m_thrust_body = std::move(x.m_thrust_body);

    return *this;
}

size_t px4_msgs::msg::VehicleRatesSetpoint::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += ((3) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

size_t px4_msgs::msg::VehicleRatesSetpoint::getCdrSerializedSize(const px4_msgs::msg::VehicleRatesSetpoint& data, size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    if ((3) > 0)
    {
        current_alignment += ((3) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }


    return current_alignment - initial_alignment;
}

void px4_msgs::msg::VehicleRatesSetpoint::serialize(eprosima::fastcdr::Cdr &scdr) const
{

    scdr << m_timestamp;
    scdr << m_roll;
    scdr << m_pitch;
    scdr << m_yaw;
    scdr << m_thrust_body;

}

void px4_msgs::msg::VehicleRatesSetpoint::deserialize(eprosima::fastcdr::Cdr &dcdr)
{

    dcdr >> m_timestamp;
    dcdr >> m_roll;
    dcdr >> m_pitch;
    dcdr >> m_yaw;
    dcdr >> m_thrust_body;

}

/*!
 * @brief This function sets a value in member timestamp
 * @param _timestamp New value for member timestamp
 */
void px4_msgs::msg::VehicleRatesSetpoint::timestamp(uint64_t _timestamp)
{
m_timestamp = _timestamp;
}

/*!
 * @brief This function returns the value of member timestamp
 * @return Value of member timestamp
 */
uint64_t px4_msgs::msg::VehicleRatesSetpoint::timestamp() const
{
    return m_timestamp;
}

/*!
 * @brief This function returns a reference to member timestamp
 * @return Reference to member timestamp
 */
uint64_t& px4_msgs::msg::VehicleRatesSetpoint::timestamp()
{
    return m_timestamp;
}

/*!
 * @brief This function sets a value in member roll
 * @param _roll New value for member roll
 */
void px4_msgs::msg::VehicleRatesSetpoint::roll(float _roll)
{
m_roll = _roll;
}

/*!
 * @brief This function returns the value of member roll
 * @return Value of member roll
 */
float px4_msgs::msg::VehicleRatesSetpoint::roll() const
{
    return m_roll;
}

/*!
 * @brief This function returns a reference to member roll
 * @return Reference to member roll
 */
float& px4_msgs::msg::VehicleRatesSetpoint::roll()
{
    return m_roll;
}

/*!
 * @brief This function sets a value in member pitch
 * @param _pitch New value for member pitch
 */
void px4_msgs::msg::VehicleRatesSetpoint::pitch(float _pitch)
{
m_pitch = _pitch;
}

/*!
 * @brief This function returns the value of member pitch
 * @return Value of member pitch
 */
float px4_msgs::msg::VehicleRatesSetpoint::pitch() const
{
    return m_pitch;
}

/*!
 * @brief This function returns a reference to member pitch
 * @return Reference to member pitch
 */
float& px4_msgs::msg::VehicleRatesSetpoint::pitch()
{
    return m_pitch;
}

/*!
 * @brief This function sets a value in member yaw
 * @param _yaw New value for member yaw
 */
void px4_msgs::msg::VehicleRatesSetpoint::yaw(float _yaw)
{
m_yaw = _yaw;
}

/*!
 * @brief This function returns the value of member yaw
 * @return Value of member yaw
 */
float px4_msgs::msg::VehicleRatesSetpoint::yaw() const
{
    return m_yaw;
}

/*!
 * @brief This function returns a reference to member yaw
 * @return Reference to member yaw
 */
float& px4_msgs::msg::VehicleRatesSetpoint::yaw()
{
    return m_yaw;
}

/*!
 * @brief This function copies the value in member thrust_body
 * @param _thrust_body New value to be copied in member thrust_body
 */
void px4_msgs::msg::VehicleRatesSetpoint::thrust_body(const px4_msgs::msg::float__3 &_thrust_body)
{
m_thrust_body = _thrust_body;
}

/*!
 * @brief This function moves the value in member thrust_body
 * @param _thrust_body New value to be moved in member thrust_body
 */
void px4_msgs::msg::VehicleRatesSetpoint::thrust_body(px4_msgs::msg::float__3 &&_thrust_body)
{
m_thrust_body = std::move(_thrust_body);
}

/*!
 * @brief This function returns a constant reference to member thrust_body
 * @return Constant reference to member thrust_body
 */
const px4_msgs::msg::float__3& px4_msgs::msg::VehicleRatesSetpoint::thrust_body() const
{
    return m_thrust_body;
}

/*!
 * @brief This function returns a reference to member thrust_body
 * @return Reference to member thrust_body
 */
px4_msgs::msg::float__3& px4_msgs::msg::VehicleRatesSetpoint::thrust_body()
{
    return m_thrust_body;
}

size_t px4_msgs::msg::VehicleRatesSetpoint::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
    size_t current_align = current_alignment;








    return current_align;
}

bool px4_msgs::msg::VehicleRatesSetpoint::isKeyDefined()
{
   return false;
}

void px4_msgs::msg::VehicleRatesSetpoint::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
    (void) scdr;
     
     
     
     
     
}


