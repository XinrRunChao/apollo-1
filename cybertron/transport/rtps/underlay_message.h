/******************************************************************************
 * Copyright 2018 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#ifndef CYBERTRON_TRANSPORT_RTPS_UNDERLAY_MESSAGE_H_
#define CYBERTRON_TRANSPORT_RTPS_UNDERLAY_MESSAGE_H_

#include <array>
#include <cstdint>
#include <string>
#include <utility>
#include <vector>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define ePcybertronima_user_DllExport __declspec(dllexport)
#else
#define ePcybertronima_user_DllExport
#endif
#else
#define ePcybertronima_user_DllExport
#endif

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(UnderlayMessage_SOURCE)
#define UnderlayMessage_DllAPI __declspec(dllexport)
#else
#define UnderlayMessage_DllAPI __declspec(dllimport)
#endif  // UnderlayMessage_SOURCE
#else
#define UnderlayMessage_DllAPI
#endif
#else
#define UnderlayMessage_DllAPI
#endif  // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
}
}  // namespace eprosima

namespace apollo {
namespace cybertron {
namespace transport {

/*!
 * @brief This class represents the structure UnderlayMessage defined by the
 * user in the IDL file.
 * @ingroup UnderlayMessage
 */
class UnderlayMessage {
 public:
  /*!
   * @brief Default constructor.
   */
  ePcybertronima_user_DllExport UnderlayMessage();

  /*!
   * @brief Default destructor.
   */
  ePcybertronima_user_DllExport ~UnderlayMessage();

  /*!
   * @brief Copy constructor.
   * @param x Reference to the object UnderlayMessage that will be copied.
   */
  ePcybertronima_user_DllExport UnderlayMessage(const UnderlayMessage &x);

  /*!
   * @brief Move constructor.
   * @param x Reference to the object UnderlayMessage that will be copied.
   */
  ePcybertronima_user_DllExport UnderlayMessage(UnderlayMessage &&x);

  /*!
   * @brief Copy assignment.
   * @param x Reference to the object UnderlayMessage that will be copied.
   */
  ePcybertronima_user_DllExport UnderlayMessage &operator=(
      const UnderlayMessage &x);

  /*!
   * @brief Move assignment.
   * @param x Reference to the object UnderlayMessage that will be copied.
   */
  ePcybertronima_user_DllExport UnderlayMessage &operator=(UnderlayMessage &&x);

  /*!
   * @brief This function sets a value in member timestamp
   * @param _timestamp New value for member timestamp
   */
  inline ePcybertronima_user_DllExport void timestamp(int32_t _timestamp) {
    m_timestamp = _timestamp;
  }

  /*!
   * @brief This function returns the value of member timestamp
   * @return Value of member timestamp
   */
  inline ePcybertronima_user_DllExport int32_t timestamp() const {
    return m_timestamp;
  }

  /*!
   * @brief This function returns a reference to member timestamp
   * @return Reference to member timestamp
   */
  inline ePcybertronima_user_DllExport int32_t &timestamp() {
    return m_timestamp;
  }
  /*!
   * @brief This function sets a value in member seq
   * @param _seq New value for member seq
   */
  inline ePcybertronima_user_DllExport void seq(int32_t _seq) { m_seq = _seq; }

  /*!
   * @brief This function returns the value of member seq
   * @return Value of member seq
   */
  inline ePcybertronima_user_DllExport int32_t seq() const { return m_seq; }

  /*!
   * @brief This function returns a reference to member seq
   * @return Reference to member seq
   */
  inline ePcybertronima_user_DllExport int32_t &seq() { return m_seq; }
  /*!
   * @brief This function copies the value in member data
   * @param _data New value to be copied in member data
   */
  inline ePcybertronima_user_DllExport void data(const std::string &_data) {
    m_data = _data;
  }

  /*!
   * @brief This function moves the value in member data
   * @param _data New value to be moved in member data
   */
  inline ePcybertronima_user_DllExport void data(std::string &&_data) {
    m_data = std::move(_data);
  }

  /*!
   * @brief This function returns a constant reference to member data
   * @return Constant reference to member data
   */
  inline ePcybertronima_user_DllExport const std::string &data() const {
    return m_data;
  }

  /*!
   * @brief This function returns a reference to member data
   * @return Reference to member data
   */
  inline ePcybertronima_user_DllExport std::string &data() { return m_data; }
  /*!
   * @brief This function copies the value in member datatype
   * @param _datatype New value to be copied in member datatype
   */
  inline ePcybertronima_user_DllExport void datatype(
      const std::string &_datatype) {
    m_datatype = _datatype;
  }

  /*!
   * @brief This function moves the value in member datatype
   * @param _datatype New value to be moved in member datatype
   */
  inline ePcybertronima_user_DllExport void datatype(std::string &&_datatype) {
    m_datatype = std::move(_datatype);
  }

  /*!
   * @brief This function returns a constant reference to member datatype
   * @return Constant reference to member datatype
   */
  inline ePcybertronima_user_DllExport const std::string &datatype() const {
    return m_datatype;
  }

  /*!
   * @brief This function returns a reference to member datatype
   * @return Reference to member datatype
   */
  inline ePcybertronima_user_DllExport std::string &datatype() {
    return m_datatype;
  }

  /*!
   * @brief This function returns the maximum serialized size of an object
   * depending on the buffer alignment.
   * @param current_alignment Buffer alignment.
   * @return Maximum serialized size.
   */
  ePcybertronima_user_DllExport static size_t getMaxCdrSerializedSize(
      size_t current_alignment = 0);

  /*!
   * @brief This function returns the serialized size of a data depending on the
   * buffer alignment.
   * @param data Data which is calculated its serialized size.
   * @param current_alignment Buffer alignment.
   * @return Serialized size.
   */
  ePcybertronima_user_DllExport static size_t getCdrSerializedSize(
      const UnderlayMessage &data, size_t current_alignment = 0);

  /*!
   * @brief This function serializes an object using CDR serialization.
   * @param cdr CDR serialization object.
   */
  ePcybertronima_user_DllExport void serialize(
      eprosima::fastcdr::Cdr &cdr) const;  // NOLINT

  /*!
   * @brief This function deserializes an object using CDR serialization.
   * @param cdr CDR serialization object.
   */
  ePcybertronima_user_DllExport void deserialize(
      eprosima::fastcdr::Cdr &cdr);  // NOLINT

  /*!
   * @brief This function returns the maximum serialized size of the Key of an
   * object
   * depending on the buffer alignment.
   * @param current_alignment Buffer alignment.
   * @return Maximum serialized size.
   */
  ePcybertronima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
      size_t current_alignment = 0);

  /*!
   * @brief This function tells you if the Key has been defined for this type
   */
  ePcybertronima_user_DllExport static bool isKeyDefined();

  /*!
   * @brief This function serializes the key members of an object using CDR
   * serialization.
   * @param cdr CDR serialization object.
   */
  ePcybertronima_user_DllExport void serializeKey(
      eprosima::fastcdr::Cdr &cdr) const;  // NOLINT

 private:
  int32_t m_timestamp;
  int32_t m_seq;
  std::string m_data;
  std::string m_datatype;
};

}  // namespace transport
}  // namespace cybertron
}  // namespace apollo

#endif  // CYBERTRON_TRANSPORT_RTPS_UNDERLAY_MESSAGE_H_
