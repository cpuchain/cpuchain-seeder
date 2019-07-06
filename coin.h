// Copyright (c) 2018 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file license.txt or http://www.opensource.org/licenses/mit-license.php.

#ifndef __INCLUDED_COIN_H__
#define __INCLUDED_COIN_H__

#include <string>

static const std::string mainnet_seeds[] = {"dnsseed.cpuchain.org", ""};

static const std::string testnet_seeds[] = {""};

static const int mainnet_port = 19706;
static const int testnet_port = 29706;

static unsigned char pchMessageStart[4] = { 0xde, 0xad, 0xbe, 0xef };
static unsigned char pchMessageStart_testnet[4] = { 0xfa, 0xce, 0xb0, 0x0c };

#endif // __INCLUDED_COIN_H__
