#ifndef __GSPCH_H__
#define __GSPCH_H__

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <signal.h>
#include <string.h>
#include <string>
#include <sstream>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <list>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <functional>
#include <algorithm>

#ifdef WIN32
#include <winsock2.h>
#include <Windows.h>
#else
#include <arpa/inet.h>
#endif

#include "define.h"
#include "LogInit.h"
#include "singleton.h"
#include "timer.h"
#include "timermgr.h"

#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#endif


#endif