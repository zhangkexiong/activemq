/*
* Copyright 2006 The Apache Software Foundation or its licensors, as
* applicable.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
#include "command/ConsumerInfo.hpp"

using namespace apache::activemq::client::command;

/*
 *
 *  Marshalling code for Open Wire Format for ConsumerInfo
 *
 *
 *  NOTE!: This file is autogenerated - do not modify!
 *         if you need to make a change, please see the Groovy scripts in the
 *         activemq-core module
 *
 */
ConsumerInfo::ConsumerInfo()
{
    this->consumerId = 0 ;
    this->browser = 0 ;
    this->destination = 0 ;
    this->prefetchSize = 0 ;
    this->maximumPendingMessageLimit = 0 ;
    this->dispatchAsync = 0 ;
    this->selector = 0 ;
    this->subcriptionName = 0 ;
    this->noLocal = 0 ;
    this->exclusive = 0 ;
    this->retroactive = 0 ;
    this->priority = 0 ;
    this->brokerPath = 0 ;
    this->additionalPredicate = 0 ;
    this->networkSubscription = 0 ;
    this->optimizedAcknowledge = 0 ;
}

ConsumerInfo::~ConsumerInfo()
{
}

        
p<ConsumerId> ConsumerInfo::getConsumerId()
{
    return consumerId ;
}

void ConsumerInfo::setConsumerId(p<ConsumerId> consumerId)
{
    this->consumerId = consumerId ;
}

        
bool ConsumerInfo::getBrowser()
{
    return browser ;
}

void ConsumerInfo::setBrowser(bool browser)
{
    this->browser = browser ;
}

        
p<ActiveMQDestination> ConsumerInfo::getDestination()
{
    return destination ;
}

void ConsumerInfo::setDestination(p<ActiveMQDestination> destination)
{
    this->destination = destination ;
}

        
int ConsumerInfo::getPrefetchSize()
{
    return prefetchSize ;
}

void ConsumerInfo::setPrefetchSize(int prefetchSize)
{
    this->prefetchSize = prefetchSize ;
}

        
int ConsumerInfo::getMaximumPendingMessageLimit()
{
    return maximumPendingMessageLimit ;
}

void ConsumerInfo::setMaximumPendingMessageLimit(int maximumPendingMessageLimit)
{
    this->maximumPendingMessageLimit = maximumPendingMessageLimit ;
}

        
bool ConsumerInfo::getDispatchAsync()
{
    return dispatchAsync ;
}

void ConsumerInfo::setDispatchAsync(bool dispatchAsync)
{
    this->dispatchAsync = dispatchAsync ;
}

        
p<string> ConsumerInfo::getSelector()
{
    return selector ;
}

void ConsumerInfo::setSelector(p<string> selector)
{
    this->selector = selector ;
}

        
p<string> ConsumerInfo::getSubcriptionName()
{
    return subcriptionName ;
}

void ConsumerInfo::setSubcriptionName(p<string> subcriptionName)
{
    this->subcriptionName = subcriptionName ;
}

        
bool ConsumerInfo::getNoLocal()
{
    return noLocal ;
}

void ConsumerInfo::setNoLocal(bool noLocal)
{
    this->noLocal = noLocal ;
}

        
bool ConsumerInfo::getExclusive()
{
    return exclusive ;
}

void ConsumerInfo::setExclusive(bool exclusive)
{
    this->exclusive = exclusive ;
}

        
bool ConsumerInfo::getRetroactive()
{
    return retroactive ;
}

void ConsumerInfo::setRetroactive(bool retroactive)
{
    this->retroactive = retroactive ;
}

        
char ConsumerInfo::getPriority()
{
    return priority ;
}

void ConsumerInfo::setPriority(char priority)
{
    this->priority = priority ;
}

        
ap<BrokerId> ConsumerInfo::getBrokerPath()
{
    return brokerPath ;
}

void ConsumerInfo::setBrokerPath(ap<BrokerId> brokerPath)
{
    this->brokerPath = brokerPath ;
}

        
p<BooleanExpression> ConsumerInfo::getAdditionalPredicate()
{
    return additionalPredicate ;
}

void ConsumerInfo::setAdditionalPredicate(p<BooleanExpression> additionalPredicate)
{
    this->additionalPredicate = additionalPredicate ;
}

        
bool ConsumerInfo::getNetworkSubscription()
{
    return networkSubscription ;
}

void ConsumerInfo::setNetworkSubscription(bool networkSubscription)
{
    this->networkSubscription = networkSubscription ;
}

        
bool ConsumerInfo::getOptimizedAcknowledge()
{
    return optimizedAcknowledge ;
}

void ConsumerInfo::setOptimizedAcknowledge(bool optimizedAcknowledge)
{
    this->optimizedAcknowledge = optimizedAcknowledge ;
}
