#pragma once

//############################################################################
//#### POCO LIBRARY ##########################################################

#include "Poco/Util/Application.h"
#include "Poco/Util/Option.h"
#include "Poco/Util/OptionSet.h"
#include "Poco/ConsoleChannel.h"
#include "Poco/FormattingChannel.h"
#include "Poco/PatternFormatter.h"
#include "Poco/Logger.h"
#include "Poco/AutoPtr.h"
#include "Poco/AsyncChannel.h"
#include "Poco/SplitterChannel.h"
#include "Poco/FileChannel.h"
#include "Poco/Util/JSONConfiguration.h"
#include "Poco/Exception.h"
#include "Poco/Format.h"
#include "Poco/File.h"
#include "Poco/Util/OptionCallback.h"

using Poco::Util::Application;
using Poco::Util::Option;
using Poco::Util::OptionSet;
using Poco::Util::OptionCallback;
using Poco::ConsoleChannel;
using Poco::FormattingChannel;
using Poco::PatternFormatter;
using Poco::Logger;
using Poco::AutoPtr;
using Poco::AsyncChannel;
using Poco::SplitterChannel;
using Poco::FileChannel;
using Poco::Util::JSONConfiguration;
using Poco::Exception;
using Poco::format;
using Poco::File;
using Poco::Int8;
using Poco::UInt8;
using Poco::Int16;
using Poco::UInt16;
using Poco::Int32;
using Poco::UInt32;
using Poco::Int64;
using Poco::UInt64;


//############################################################################
//#### standard library ######################################################

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <sstream>

using std::string; 
using std::vector;
using std::unique_ptr;

//############################################################################
