/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.3.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Order.h"

#include <string>
#include <vector>
#include <sstream>
#include <stdexcept>
#include <algorithm>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace org {
namespace openapitools {
namespace client {
namespace model {

Order::Order(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}

std::string Order::toJsonString(bool prettyJson /* = false */) const
{
    return toJsonString_internal(prettyJson);
}

void Order::fromJsonString(std::string const& jsonString)
{
    fromJsonString_internal(jsonString);
}

boost::property_tree::ptree Order::toPropertyTree() const
{
    return toPropertyTree_internal();
}

void Order::fromPropertyTree(boost::property_tree::ptree const& pt)
{
    fromPropertyTree_internal(pt);
}

std::string Order::toJsonString_internal(bool prettyJson) const
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void Order::fromJsonString_internal(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree Order::toPropertyTree_internal() const
{
	ptree pt;
	ptree tmp_node;
	pt.put("id", m_Id);
	pt.put("petId", m_PetId);
	pt.put("quantity", m_Quantity);
	pt.put("shipDate", m_ShipDate);
	pt.put("status", m_Status);
	pt.put("complete", m_Complete);
	return pt;
}

void Order::fromPropertyTree_internal(ptree const &pt)
{
	ptree tmp_node;
	m_Id = pt.get("id", 0L);
	m_PetId = pt.get("petId", 0L);
	m_Quantity = pt.get("quantity", 0);
	m_ShipDate = pt.get("shipDate", "");
	setStatus(pt.get("status", ""));
	m_Complete = pt.get("complete", false);
}

int64_t Order::getId() const
{
    return m_Id;
}

void Order::setId(int64_t value)
{
	m_Id = value;
}
int64_t Order::getPetId() const
{
    return m_PetId;
}

void Order::setPetId(int64_t value)
{
	m_PetId = value;
}
int32_t Order::getQuantity() const
{
    return m_Quantity;
}

void Order::setQuantity(int32_t value)
{
	m_Quantity = value;
}
std::string Order::getShipDate() const
{
    return m_ShipDate;
}

void Order::setShipDate(std::string value)
{
	m_ShipDate = value;
}
std::string Order::getStatus() const
{
    return m_Status;
}

void Order::setStatus(std::string value)
{
	if (std::find(m_StatusEnum.begin(), m_StatusEnum.end(), value) != m_StatusEnum.end()) {
		m_Status = value;
	} else {
		throw std::runtime_error("Value " + value + " not allowed");
	}
}
bool Order::isComplete() const
{
    return m_Complete;
}

void Order::setComplete(bool value)
{
	m_Complete = value;
}

std::string createJsonStringFromModelVector(const std::vector<std::shared_ptr<Order>>& data)
{
    std::stringstream output;
    output << '[';
    for (std::size_t i = 0; i < data.size(); ++i) {
        output << data[i]->toJsonString(false);
        if (i < data.size() - 1) {
            output << ", ";
        }
    }
    output << ']';
    return output.str();
}

void createModelVectorFromJsonString(std::vector<std::shared_ptr<Order>>& vec, const std::string& json)
{
std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    for (const auto& child: pt) {
        vec.emplace_back(std::make_shared<Order>(child.second));
    }
}

}
}
}
}

