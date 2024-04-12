/* Copyright (c) 2021 OceanBase and/or its affiliates. All rights reserved.
miniob is licensed under Mulan PSL v2.
You can use this software according to the terms and conditions of the Mulan PSL v2.
You may obtain a copy of Mulan PSL v2 at:
         http://license.coscl.org.cn/MulanPSL2
THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
See the Mulan PSL v2 for more details. */

//
// Created by WangYunlai on 2022/6/9.
//

#pragma once

#include "sql/operator/physical_operator.h"
#include "sql/parser/parse.h"
#include "sql/expr/tuple.h"

/**
 * @brief 物理算子，删除
 * @ingroup PhysicalOperator
 */
class AggregatePhysicalOperator : public PhysicalOperator
{
public:
  AggregatePhysicalOperator(){}

  virtual ~AggregatePhysicalOperator() = default;

  void add_aggregation(const AggrOp aggregation);

  PhysicalOperatorType type() const override
  {
    return PhysicalOperatorType::AGGREGATE;
  }

  RC open(Trx *trx) override;
  RC next() override;
  RC close() override;

  Tuple *current_tuple() override;  

private:
  std::vector<AggrOp> aggregations_;
  ValueListTuple result_tuple_;
};