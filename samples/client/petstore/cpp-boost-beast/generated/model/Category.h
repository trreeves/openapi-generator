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

/*
 * Category.h
 *
 * A category for a pet
 */

#ifndef BOOST_BEAST_OPENAPI_CLIENT_Category_MODEL_H_
#define BOOST_BEAST_OPENAPI_CLIENT_Category_MODEL_H_


#include <string>
#include <memory>
#include <vector>
#include <boost/property_tree/ptree.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// A category for a pet
/// </summary>
class  Category 
{
public:
    Category() = default;
    explicit Category(boost::property_tree::ptree const& pt);
    virtual ~Category() = default;

    std::string toJsonString(bool prettyJson = false) const;
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree() const;
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// Category members

    /// <summary>
    /// 
    /// </summary>
    int64_t getId() const;
    void setId(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    std::string getName() const;
    void setName(std::string value);

protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string toJsonString_internal(bool prettyJson = false) const;
    virtual void fromJsonString_internal(std::string const& jsonString);
    virtual boost::property_tree::ptree toPropertyTree_internal() const;
    virtual void fromPropertyTree_internal(boost::property_tree::ptree const& pt);


protected:
    int64_t m_Id = 0L;
    std::string m_Name = "";
};

std::string createJsonStringFromModelVector(const std::vector<std::shared_ptr<Category>>& data);

void createModelVectorFromJsonString(std::vector<std::shared_ptr<Category>>& vec, const std::string& json);


}
}
}
}


#endif /* BOOST_BEAST_OPENAPI_CLIENT_Category_MODEL_H_ */
