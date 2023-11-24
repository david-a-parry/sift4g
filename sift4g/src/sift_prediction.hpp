/*!
 * @file sift_prediction.hpp
 *
 * @brief SIFT predictions header file
 *
 * @author: rvaser
 */

#pragma once

#include <stdint.h>
#include <vector>
#include <string>

#include "swsharp/swsharp.h"

void checkData(Chain** queries, int32_t& queries_length, const std::string& subst_path);

void siftPredictions(std::vector<std::vector<Chain*>>& alignment_strings,
    Chain** queries, int32_t queries_length, const std::string& subst_path,
    int32_t sequence_identity, uint32_t max_alignments, const std::string& out_path);
