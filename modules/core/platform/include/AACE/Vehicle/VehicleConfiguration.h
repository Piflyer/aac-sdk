/*
 * Copyright 2017-2018 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *     http://aws.amazon.com/apache2.0/
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#ifndef AACE_VEHICLE_CONFIG_VEHICLE_CONFIGURATION_H
#define AACE_VEHICLE_CONFIG_VEHICLE_CONFIGURATION_H

#include <utility>

#include "AACE/Core/EngineConfiguration.h"

/** @file */

namespace aace {
namespace vehicle {
namespace config {

class VehicleConfiguration {
public:
    enum class VehiclePropertyType {
        MAKE, MODEL, YEAR, TRIM, GEOGRAPHY, VERSION, OPERATING_SYSTEM, HARDWARE_ARCH, LANGUAGE
    };
    
    using VehicleProperty = std::pair<VehiclePropertyType,std::string>;

    /**
     * Factory method used to programmatically generate vehicle info configuration data.
     * The data generated by this method is equivalent to providing the following @c JSON
     * values in a configuration file:
     *
     * @code{.json}
     * {
     *   "aace.vehicle":
     *   {
     *      "info": {
     *          "make": "<MAKE>",
     *          "model": "<MODEL>",
     *          "year": "<YEAR>",
     *          "trim": "<TRIM>",
     *          "geography": "<GEOGRAPHY>",
     *          "version": "<SOFTWARE_VERSION>",
     *          "os": "<OPERATING_SYSTEM>",
     *          "arch": "<HARDWARE_ARCH>"
     *          "language": "<LANGUAGE>"
     *      }
     *   }
     * }
     * @endcode
     *
     * @param [in] propertyList List of @c VehicleProperty and value pairs.
     */
    static std::shared_ptr<aace::core::config::EngineConfiguration> createVehicleInfoConfig( std::initializer_list<VehicleProperty> propertyList );
};

} // aace::vehicle::config
} // aace::vehicle
} // aace

#endif // AACE_VEHICLE_CONFIG_VEHICLE_CONFIGURATION_H