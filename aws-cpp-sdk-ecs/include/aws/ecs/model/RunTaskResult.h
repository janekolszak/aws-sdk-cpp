/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/Task.h>
#include <aws/ecs/model/Failure.h>

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
namespace ECS
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_ECS_API RunTaskResult
  {
  public:
    RunTaskResult();
    RunTaskResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RunTaskResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /*
     <p>A full description of the tasks that were run. Each task that was successfully placed on your cluster will be described here.</p>
    */
    inline const Aws::Vector<Task>& GetTasks() const{ return m_tasks; }

    /*
     <p>A full description of the tasks that were run. Each task that was successfully placed on your cluster will be described here.</p>
    */
    inline void SetTasks(const Aws::Vector<Task>& value) { m_tasks = value; }

    /*
     <p>A full description of the tasks that were run. Each task that was successfully placed on your cluster will be described here.</p>
    */
    inline void SetTasks(Aws::Vector<Task>&& value) { m_tasks = value; }

    /*
     <p>A full description of the tasks that were run. Each task that was successfully placed on your cluster will be described here.</p>
    */
    inline RunTaskResult& WithTasks(const Aws::Vector<Task>& value) { SetTasks(value); return *this;}

    /*
     <p>A full description of the tasks that were run. Each task that was successfully placed on your cluster will be described here.</p>
    */
    inline RunTaskResult& WithTasks(Aws::Vector<Task>&& value) { SetTasks(value); return *this;}

    /*
     <p>A full description of the tasks that were run. Each task that was successfully placed on your cluster will be described here.</p>
    */
    inline RunTaskResult& AddTasks(const Task& value) { m_tasks.push_back(value); return *this; }

    /*
     <p>A full description of the tasks that were run. Each task that was successfully placed on your cluster will be described here.</p>
    */
    inline RunTaskResult& AddTasks(Task&& value) { m_tasks.push_back(value); return *this; }

    /*
     <p>Any failed tasks from your <code>RunTask</code> action are listed here.</p>
    */
    inline const Aws::Vector<Failure>& GetFailures() const{ return m_failures; }

    /*
     <p>Any failed tasks from your <code>RunTask</code> action are listed here.</p>
    */
    inline void SetFailures(const Aws::Vector<Failure>& value) { m_failures = value; }

    /*
     <p>Any failed tasks from your <code>RunTask</code> action are listed here.</p>
    */
    inline void SetFailures(Aws::Vector<Failure>&& value) { m_failures = value; }

    /*
     <p>Any failed tasks from your <code>RunTask</code> action are listed here.</p>
    */
    inline RunTaskResult& WithFailures(const Aws::Vector<Failure>& value) { SetFailures(value); return *this;}

    /*
     <p>Any failed tasks from your <code>RunTask</code> action are listed here.</p>
    */
    inline RunTaskResult& WithFailures(Aws::Vector<Failure>&& value) { SetFailures(value); return *this;}

    /*
     <p>Any failed tasks from your <code>RunTask</code> action are listed here.</p>
    */
    inline RunTaskResult& AddFailures(const Failure& value) { m_failures.push_back(value); return *this; }

    /*
     <p>Any failed tasks from your <code>RunTask</code> action are listed here.</p>
    */
    inline RunTaskResult& AddFailures(Failure&& value) { m_failures.push_back(value); return *this; }

  private:
    Aws::Vector<Task> m_tasks;
    Aws::Vector<Failure> m_failures;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws