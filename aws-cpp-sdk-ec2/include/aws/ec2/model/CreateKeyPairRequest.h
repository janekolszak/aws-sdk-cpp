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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for CreateKeyPair.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateKeyPairRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API CreateKeyPairRequest : public EC2Request
  {
  public:
    CreateKeyPairRequest();
    Aws::String SerializePayload() const override;


  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CreateKeyPairRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>A unique name for the key pair.</p> <p>Constraints: Up to 255 ASCII
     * characters</p>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }

    /**
     * <p>A unique name for the key pair.</p> <p>Constraints: Up to 255 ASCII
     * characters</p>
     */
    inline void SetKeyName(const Aws::String& value) { m_keyNameHasBeenSet = true; m_keyName = value; }

    /**
     * <p>A unique name for the key pair.</p> <p>Constraints: Up to 255 ASCII
     * characters</p>
     */
    inline void SetKeyName(Aws::String&& value) { m_keyNameHasBeenSet = true; m_keyName = value; }

    /**
     * <p>A unique name for the key pair.</p> <p>Constraints: Up to 255 ASCII
     * characters</p>
     */
    inline void SetKeyName(const char* value) { m_keyNameHasBeenSet = true; m_keyName.assign(value); }

    /**
     * <p>A unique name for the key pair.</p> <p>Constraints: Up to 255 ASCII
     * characters</p>
     */
    inline CreateKeyPairRequest& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}

    /**
     * <p>A unique name for the key pair.</p> <p>Constraints: Up to 255 ASCII
     * characters</p>
     */
    inline CreateKeyPairRequest& WithKeyName(Aws::String&& value) { SetKeyName(value); return *this;}

    /**
     * <p>A unique name for the key pair.</p> <p>Constraints: Up to 255 ASCII
     * characters</p>
     */
    inline CreateKeyPairRequest& WithKeyName(const char* value) { SetKeyName(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_keyName;
    bool m_keyNameHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
