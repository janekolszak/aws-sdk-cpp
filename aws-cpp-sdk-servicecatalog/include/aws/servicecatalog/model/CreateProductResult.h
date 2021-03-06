﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ProductViewDetail.h>
#include <aws/servicecatalog/model/ProvisioningArtifactDetail.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog/model/Tag.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServiceCatalog
{
namespace Model
{
  class AWS_SERVICECATALOG_API CreateProductResult
  {
  public:
    CreateProductResult();
    CreateProductResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateProductResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The resulting detailed product view information.</p>
     */
    inline const ProductViewDetail& GetProductViewDetail() const{ return m_productViewDetail; }

    /**
     * <p>The resulting detailed product view information.</p>
     */
    inline void SetProductViewDetail(const ProductViewDetail& value) { m_productViewDetail = value; }

    /**
     * <p>The resulting detailed product view information.</p>
     */
    inline void SetProductViewDetail(ProductViewDetail&& value) { m_productViewDetail = value; }

    /**
     * <p>The resulting detailed product view information.</p>
     */
    inline CreateProductResult& WithProductViewDetail(const ProductViewDetail& value) { SetProductViewDetail(value); return *this;}

    /**
     * <p>The resulting detailed product view information.</p>
     */
    inline CreateProductResult& WithProductViewDetail(ProductViewDetail&& value) { SetProductViewDetail(value); return *this;}

    /**
     * <p>The resulting detailed provisioning artifact information.</p>
     */
    inline const ProvisioningArtifactDetail& GetProvisioningArtifactDetail() const{ return m_provisioningArtifactDetail; }

    /**
     * <p>The resulting detailed provisioning artifact information.</p>
     */
    inline void SetProvisioningArtifactDetail(const ProvisioningArtifactDetail& value) { m_provisioningArtifactDetail = value; }

    /**
     * <p>The resulting detailed provisioning artifact information.</p>
     */
    inline void SetProvisioningArtifactDetail(ProvisioningArtifactDetail&& value) { m_provisioningArtifactDetail = value; }

    /**
     * <p>The resulting detailed provisioning artifact information.</p>
     */
    inline CreateProductResult& WithProvisioningArtifactDetail(const ProvisioningArtifactDetail& value) { SetProvisioningArtifactDetail(value); return *this;}

    /**
     * <p>The resulting detailed provisioning artifact information.</p>
     */
    inline CreateProductResult& WithProvisioningArtifactDetail(ProvisioningArtifactDetail&& value) { SetProvisioningArtifactDetail(value); return *this;}

    /**
     * <p>Tags successfully associated with the new product.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags successfully associated with the new product.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>Tags successfully associated with the new product.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = value; }

    /**
     * <p>Tags successfully associated with the new product.</p>
     */
    inline CreateProductResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags successfully associated with the new product.</p>
     */
    inline CreateProductResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>Tags successfully associated with the new product.</p>
     */
    inline CreateProductResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>Tags successfully associated with the new product.</p>
     */
    inline CreateProductResult& AddTags(Tag&& value) { m_tags.push_back(value); return *this; }

  private:
    ProductViewDetail m_productViewDetail;
    ProvisioningArtifactDetail m_provisioningArtifactDetail;
    Aws::Vector<Tag> m_tags;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
