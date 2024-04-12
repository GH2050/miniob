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
// Created by WangYunlai on 2023/4/25.
//

#pragma once

#include <vector>
//#include <memory>//my2
//#include "sql/expr/expression.h"
#include "sql/operator/logical_operator.h"
#include "sql/parser/parse_defs.h"

/**
 * @brief 插入逻辑算子
 * @ingroup LogicalOperator
 */
class AggregateLogicalOperator : public LogicalOperator
{
public:
  AggregateLogicalOperator(const std::vector<Field>& fields);
  virtual ~AggregateLogicalOperator() = default;

  LogicalOperatorType type() const override
  {
    return LogicalOperatorType::Aggregate;
  }

  const std::vector<Field> &fields() const { return fields_; }
  std::vector<Field> &fields() { return fields_; }

private:
  std::vector<Field> fields_;
};