/* ******************************************************************************
 *
 *
 * This program and the accompanying materials are made available under the
 * terms of the Apache License, Version 2.0 which is available at
 * https://www.apache.org/licenses/LICENSE-2.0.
 *
 *  See the NOTICE file distributed with this work for additional
 *  information regarding copyright ownership.
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 * SPDX-License-Identifier: Apache-2.0
 ******************************************************************************/

//
// Created by raver119 on 15/11/17.
//

#ifndef LIBND4J_VARIABLESSET_H
#define LIBND4J_VARIABLESSET_H

#include <iterator>
#include <vector>
#include <system/pointercast.h>
#include <system/dll.h>
#include <graph/Variable.h>


namespace sd {
    namespace graph {
        class ND4J_EXPORT VariablesSet {
        protected:
            std::vector<sd::graph::Variable*> _holder;
            Nd4jStatus _status;
        public:
            VariablesSet(Nd4jStatus status = ND4J_STATUS_OK);
            ~VariablesSet();

            Nd4jStatus status();

            int size();

            void push_back(Variable* variable);

            Variable* at(int index);

        };
    }
}



#endif //LIBND4J_VARIABLESSET_H
