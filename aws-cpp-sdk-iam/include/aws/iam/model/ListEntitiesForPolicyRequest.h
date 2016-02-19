/*
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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/EntityType.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API ListEntitiesForPolicyRequest : public IAMRequest
  {
  public:
    ListEntitiesForPolicyRequest();
    Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetPolicyArn() const{ return m_policyArn; }

    
    inline void SetPolicyArn(const Aws::String& value) { m_policyArnHasBeenSet = true; m_policyArn = value; }

    
    inline void SetPolicyArn(Aws::String&& value) { m_policyArnHasBeenSet = true; m_policyArn = value; }

    
    inline void SetPolicyArn(const char* value) { m_policyArnHasBeenSet = true; m_policyArn.assign(value); }

    
    inline ListEntitiesForPolicyRequest& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}

    
    inline ListEntitiesForPolicyRequest& WithPolicyArn(Aws::String&& value) { SetPolicyArn(value); return *this;}

    
    inline ListEntitiesForPolicyRequest& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}

    /**
     * <p>The entity type to use for filtering the results. </p> <p>For example, when
     * <code>EntityFilter</code> is <code>Role</code>, only the roles that are attached
     * to the specified policy are returned. This parameter is optional. If it is not
     * included, all attached entities (users, groups, and roles) are returned. </p>
     */
    inline const EntityType& GetEntityFilter() const{ return m_entityFilter; }

    /**
     * <p>The entity type to use for filtering the results. </p> <p>For example, when
     * <code>EntityFilter</code> is <code>Role</code>, only the roles that are attached
     * to the specified policy are returned. This parameter is optional. If it is not
     * included, all attached entities (users, groups, and roles) are returned. </p>
     */
    inline void SetEntityFilter(const EntityType& value) { m_entityFilterHasBeenSet = true; m_entityFilter = value; }

    /**
     * <p>The entity type to use for filtering the results. </p> <p>For example, when
     * <code>EntityFilter</code> is <code>Role</code>, only the roles that are attached
     * to the specified policy are returned. This parameter is optional. If it is not
     * included, all attached entities (users, groups, and roles) are returned. </p>
     */
    inline void SetEntityFilter(EntityType&& value) { m_entityFilterHasBeenSet = true; m_entityFilter = value; }

    /**
     * <p>The entity type to use for filtering the results. </p> <p>For example, when
     * <code>EntityFilter</code> is <code>Role</code>, only the roles that are attached
     * to the specified policy are returned. This parameter is optional. If it is not
     * included, all attached entities (users, groups, and roles) are returned. </p>
     */
    inline ListEntitiesForPolicyRequest& WithEntityFilter(const EntityType& value) { SetEntityFilter(value); return *this;}

    /**
     * <p>The entity type to use for filtering the results. </p> <p>For example, when
     * <code>EntityFilter</code> is <code>Role</code>, only the roles that are attached
     * to the specified policy are returned. This parameter is optional. If it is not
     * included, all attached entities (users, groups, and roles) are returned. </p>
     */
    inline ListEntitiesForPolicyRequest& WithEntityFilter(EntityType&& value) { SetEntityFilter(value); return *this;}

    /**
     * <p>The path prefix for filtering the results. This parameter is optional. If it
     * is not included, it defaults to a slash (/), listing all entities.</p>
     */
    inline const Aws::String& GetPathPrefix() const{ return m_pathPrefix; }

    /**
     * <p>The path prefix for filtering the results. This parameter is optional. If it
     * is not included, it defaults to a slash (/), listing all entities.</p>
     */
    inline void SetPathPrefix(const Aws::String& value) { m_pathPrefixHasBeenSet = true; m_pathPrefix = value; }

    /**
     * <p>The path prefix for filtering the results. This parameter is optional. If it
     * is not included, it defaults to a slash (/), listing all entities.</p>
     */
    inline void SetPathPrefix(Aws::String&& value) { m_pathPrefixHasBeenSet = true; m_pathPrefix = value; }

    /**
     * <p>The path prefix for filtering the results. This parameter is optional. If it
     * is not included, it defaults to a slash (/), listing all entities.</p>
     */
    inline void SetPathPrefix(const char* value) { m_pathPrefixHasBeenSet = true; m_pathPrefix.assign(value); }

    /**
     * <p>The path prefix for filtering the results. This parameter is optional. If it
     * is not included, it defaults to a slash (/), listing all entities.</p>
     */
    inline ListEntitiesForPolicyRequest& WithPathPrefix(const Aws::String& value) { SetPathPrefix(value); return *this;}

    /**
     * <p>The path prefix for filtering the results. This parameter is optional. If it
     * is not included, it defaults to a slash (/), listing all entities.</p>
     */
    inline ListEntitiesForPolicyRequest& WithPathPrefix(Aws::String&& value) { SetPathPrefix(value); return *this;}

    /**
     * <p>The path prefix for filtering the results. This parameter is optional. If it
     * is not included, it defaults to a slash (/), listing all entities.</p>
     */
    inline ListEntitiesForPolicyRequest& WithPathPrefix(const char* value) { SetPathPrefix(value); return *this;}

    /**
     * <p>Use this parameter only when paginating results and only after you have
     * received a response where the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response you just received.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Use this parameter only when paginating results and only after you have
     * received a response where the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response you just received.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Use this parameter only when paginating results and only after you have
     * received a response where the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response you just received.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Use this parameter only when paginating results and only after you have
     * received a response where the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response you just received.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>Use this parameter only when paginating results and only after you have
     * received a response where the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response you just received.</p>
     */
    inline ListEntitiesForPolicyRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Use this parameter only when paginating results and only after you have
     * received a response where the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response you just received.</p>
     */
    inline ListEntitiesForPolicyRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>Use this parameter only when paginating results and only after you have
     * received a response where the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response you just received.</p>
     */
    inline ListEntitiesForPolicyRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * <p>Use this only when paginating results to indicate the maximum number of items
     * you want in the response. If there are additional items beyond the maximum you
     * specify, the <code>IsTruncated</code> response element is <code>true</code>.</p>
     * <p>This parameter is optional. If you do not include it, it defaults to 100.</p>
     */
    inline long GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>Use this only when paginating results to indicate the maximum number of items
     * you want in the response. If there are additional items beyond the maximum you
     * specify, the <code>IsTruncated</code> response element is <code>true</code>.</p>
     * <p>This parameter is optional. If you do not include it, it defaults to 100.</p>
     */
    inline void SetMaxItems(long value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>Use this only when paginating results to indicate the maximum number of items
     * you want in the response. If there are additional items beyond the maximum you
     * specify, the <code>IsTruncated</code> response element is <code>true</code>.</p>
     * <p>This parameter is optional. If you do not include it, it defaults to 100.</p>
     */
    inline ListEntitiesForPolicyRequest& WithMaxItems(long value) { SetMaxItems(value); return *this;}

  private:
    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet;
    EntityType m_entityFilter;
    bool m_entityFilterHasBeenSet;
    Aws::String m_pathPrefix;
    bool m_pathPrefixHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
    long m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws