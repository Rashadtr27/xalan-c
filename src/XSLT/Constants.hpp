/*
 * The Apache Software License, Version 1.1
 *
 *
 * Copyright (c) 1999 The Apache Software Foundation.  All rights 
 * reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer. 
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. The end-user documentation included with the redistribution,
 *    if any, must include the following acknowledgment:  
 *       "This product includes software developed by the
 *        Apache Software Foundation (http://www.apache.org/)."
 *    Alternately, this acknowledgment may appear in the software itself,
 *    if and wherever such third-party acknowledgments normally appear.
 *
 * 4. The names "Xalan" and "Apache Software Foundation" must
 *    not be used to endorse or promote products derived from this
 *    software without prior written permission. For written 
 *    permission, please contact apache@apache.org.
 *
 * 5. Products derived from this software may not be called "Apache",
 *    nor may "Apache" appear in their name, without prior written
 *    permission of the Apache Software Foundation.
 *
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED.  IN NO EVENT SHALL THE APACHE SOFTWARE FOUNDATION OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
 * USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 * ====================================================================
 *
 * This software consists of voluntary contributions made by many
 * individuals on behalf of the Apache Software Foundation and was
 * originally based on software copyright (c) 1999, International
 * Business Machines, Inc., http://www.ibm.com.  For more
 * information on the Apache Software Foundation, please see
 * <http://www.apache.org/>.
 *
 * @author <a href="mailto:david_n_bertoni@lotus.com">David N. Bertoni</a>
 */
#if !defined(XALAN_CONSTANTS_HEADER_GUARD)
#define XALAN_CONSTANTS_HEADER_GUARD



// Base include file.  Must be first.
#include "XSLTDefinitions.hpp"



#include <XalanDOM/XalanDOMString.hpp>



/**
 * Primary constants used in the XSLTProcessor classes.
 */
class XALAN_XSLT_EXPORT Constants
{
public:

	/**
	 * Perform initialization of statics -- must be called before any
	 * processing occurs.  See class XSLTInit.
	 */
	static void
	initialize();

	/**
	 * Perform termination of statics.  See class XSLTInit.
	 */
	static void
	terminate();

	/**
	 * IDs for XSL element types. These are associated 
	 * with the string literals in the XSLTProcessor class.
	 * Don't change the numbers.
	 */
	enum eElementName
	{
		ELEMNAME_UNDEFINED = -1,
		ELEMNAME_WITHPARAM = 2,
		ELEMNAME_ADDATTRIBUTE = 4,
		ELEMNAME_APPLY_TEMPLATES = 50,
		ELEMNAME_USE = 34,
		ELEMNAME_CHILDREN = 6,
		ELEMNAME_CHOOSE = 37,
		ELEMNAME_COMMENT = 59, // my own
		ELEMNAME_CONSTRUCT = 7, // my own
		ELEMNAME_CONTENTS = 8,
		ELEMNAME_COPY = 9,
		ELEMNAME_COPY_OF = 74,
		ELEMNAME_DEFINEATTRIBUTESET = 40,
		ELEMNAME_EMPTY = 14,
		ELEMNAME_EXTENSION = 54,
		ELEMNAME_EXTENSIONHANDLER = 63,
		ELEMNAME_FOREACH = 28,
		ELEMNAME_KEY = 31,
		ELEMNAME_IF = 36,
		ELEMNAME_IMPORT = 26,
		ELEMNAME_INCLUDE = 27,
		ELEMNAME_CALLTEMPLATE = 17,
		ELEMNAME_PARAMVARIABLE = 41,
		ELEMNAME_NUMBER = 35,
		ELEMNAME_OTHERWISE = 39,
		ELEMNAME_PI = 58,
		ELEMNAME_PRESERVESPACE = 33,
		ELEMNAME_TEMPLATE = 19,
		ELEMNAME_SORT = 64,
		ELEMNAME_STRIPSPACE = 32,
		ELEMNAME_STYLESHEET = 25,
		ELEMNAME_TEXT = 42,
		ELEMNAME_VALUEOF = 30,
		ELEMNAME_WHEN = 38,
  
		// Pattern by example support
		ELEMNAME_ROOT = 44,
		ELEMNAME_ANY = 45,
		ELEMNAME_ELEMENT = 46,
		ELEMNAME_ATTRIBUTE = 48,

		ELEMNAME_PARAM = 56,
		ELEMNAME_FALLBACK = 57,

		ELEMNAME_APPLY_IMPORTS = 72,

		ELEMNAME_VARIABLE = 73,
		ELEMNAME_MESSAGE = 75,

		ELEMNAME_LITERALRESULT = 77,
		ELEMNAME_TEXTLITERALRESULT = 78,

		ELEMNAME_EXTENSIONCALL = 79,

		ELEMNAME_OUTPUT = 80,
		ELEMNAME_COMPONENT = 81,
		ELEMNAME_SCRIPT = 82,
		ELEMNAME_DECIMALFORMAT = 83,
		ELEMNAME_NSALIAS = 84

	  // Next free number: 85
	};

	/**
	 * Literals for XSL element names.  Note that there are more
	 * names than IDs, because some names map to the same ID.
	 */

	// Result tree counting
	static const XalanDOMString&	ELEMNAME_ANY_STRING;
	static const XalanDOMString&	ELEMNAME_APPLY_IMPORTS_STRING;
	static const XalanDOMString&	ELEMNAME_APPLY_IMPORTS_WITH_PREFIX_STRING;
	static const XalanDOMString&	ELEMNAME_APPLY_TEMPLATES_STRING;
	static const XalanDOMString&	ELEMNAME_APPLY_TEMPLATES_WITH_PREFIX_STRING;
	static const XalanDOMString&	ELEMNAME_ATTRIBUTESET_STRING;
	static const XalanDOMString&	ELEMNAME_ATTRIBUTESET_WITH_PREFIX_STRING;
	static const XalanDOMString&	ELEMNAME_ATTRIBUTE_STRING;
	static const XalanDOMString&	ELEMNAME_ATTRIBUTE_WITH_PREFIX_STRING;
	static const XalanDOMString&	ELEMNAME_CALLTEMPLATE_STRING;
	static const XalanDOMString&	ELEMNAME_CALLTEMPLATE_WITH_PREFIX_STRING;
	static const XalanDOMString&	ELEMNAME_CALL_STRING;
	static const XalanDOMString&	ELEMNAME_CHILDREN_STRING;
	static const XalanDOMString&	ELEMNAME_CHOOSE_STRING;
	static const XalanDOMString&	ELEMNAME_CHOOSE_WITH_PREFIX_STRING;
	static const XalanDOMString&	ELEMNAME_COMMENT_STRING;
	static const XalanDOMString&	ELEMNAME_COMMENT_WITH_PREFIX_STRING;
	static const XalanDOMString&	ELEMNAME_CONSTRUCT_STRING;
	static const XalanDOMString&	ELEMNAME_CONTENTS_STRING;
	static const XalanDOMString&	ELEMNAME_COPY_OF_STRING;
	static const XalanDOMString&	ELEMNAME_COPY_OF_WITH_PREFIX_STRING;
	static const XalanDOMString&	ELEMNAME_COPY_STRING;
	static const XalanDOMString&	ELEMNAME_COPY_WITH_PREFIX_STRING;
	static const XalanDOMString&	ELEMNAME_DECIMALFORMAT_STRING;
	static const XalanDOMString&	ELEMNAME_DECIMALFORMAT_WITH_PREFIX_STRING;
	static const XalanDOMString&	ELEMNAME_ELEMENT_STRING;
	static const XalanDOMString&	ELEMNAME_ELEMENT_WITH_PREFIX_STRING;
	static const XalanDOMString&	ELEMNAME_EMPTY_STRING;
	static const XalanDOMString&	ELEMNAME_EXTENSIONHANDLER_STRING;
	static const XalanDOMString&	ELEMNAME_EXTENSION_STRING;
	static const XalanDOMString&	ELEMNAME_FALLBACK_STRING;
	static const XalanDOMString&	ELEMNAME_FALLBACK_WITH_PREFIX_STRING;
	static const XalanDOMString&	ELEMNAME_FOREACH_STRING;
	static const XalanDOMString&	ELEMNAME_FOREACH_WITH_PREFIX_STRING;
	static const XalanDOMString&	ELEMNAME_HTML_STRING;
	static const XalanDOMString&	ELEMNAME_IF_STRING;
	static const XalanDOMString&	ELEMNAME_IF_WITH_PREFIX_STRING;
	static const XalanDOMString&	ELEMNAME_IMPORT_STRING;
	static const XalanDOMString&	ELEMNAME_INCLUDE_STRING;
	static const XalanDOMString&	ELEMNAME_KEY_STRING;
	static const XalanDOMString&	ELEMNAME_MESSAGE_STRING;
	static const XalanDOMString&	ELEMNAME_MESSAGE_WITH_PREFIX_STRING;
	static const XalanDOMString&	ELEMNAME_NSALIAS_STRING;
	static const XalanDOMString&	ELEMNAME_NUMBER_STRING;
	static const XalanDOMString&	ELEMNAME_NUMBER_WITH_PREFIX_STRING;
	static const XalanDOMString&	ELEMNAME_OTHERWISE_STRING;
	static const XalanDOMString&	ELEMNAME_OTHERWISE_WITH_PREFIX_STRING;
	static const XalanDOMString&	ELEMNAME_PRESERVESPACE_STRING;
	static const XalanDOMString&	ELEMNAME_ROOT_STRING;
	static const XalanDOMString&	ELEMNAME_SORT_STRING;
	static const XalanDOMString&	ELEMNAME_SORT_WITH_PREFIX_STRING;
	static const XalanDOMString&	ELEMNAME_STRIPSPACE_STRING;
	static const XalanDOMString&	ELEMNAME_STYLESHEET_STRING;
	static const XalanDOMString&	ELEMNAME_TEMPLATE_STRING;
	static const XalanDOMString&	ELEMNAME_TEMPLATE_WITH_PREFIX_STRING;
	static const XalanDOMString&	ELEMNAME_TEXT_STRING;
	static const XalanDOMString&	ELEMNAME_TEXT_WITH_PREFIX_STRING;
	static const XalanDOMString&	ELEMNAME_TRANSFORM_STRING;
	static const XalanDOMString&	ELEMNAME_USE_STRING;
	static const XalanDOMString&	ELEMNAME_USE_WITH_PREFIX_STRING;
	static const XalanDOMString&	ELEMNAME_VALUEOF_STRING;
	static const XalanDOMString&	ELEMNAME_VALUEOF_WITH_PREFIX_STRING;
	static const XalanDOMString&	ELEMNAME_VARIABLE_STRING;
	static const XalanDOMString&	ELEMNAME_VARIABLE_WITH_PREFIX_STRING;
	static const XalanDOMString&	ELEMNAME_WHEN_STRING;
	static const XalanDOMString&	ELEMNAME_WHEN_WITH_PREFIX_STRING;
	static const XalanDOMString&	ELEMNAME_COMPONENT_STRING;
	static const XalanDOMString&	ELEMNAME_OUTPUT_STRING;
	static const XalanDOMString&	ELEMNAME_PARAMVARIABLE_STRING;
	static const XalanDOMString&	ELEMNAME_PARAMVARIABLE_WITH_PREFIX_STRING;
	static const XalanDOMString&	ELEMNAME_PI_STRING;
	static const XalanDOMString&	ELEMNAME_PI_WITH_PREFIX_STRING;
	static const XalanDOMString&	ELEMNAME_SCRIPT_STRING;
	static const XalanDOMString&	ELEMNAME_WITHPARAM_STRING;
	static const XalanDOMString&	ELEMNAME_WITHPARAM_WITH_PREFIX_STRING;
  
	/*---------------------------------------------
	 * Literals for XSL attribute names.
	 */
	static const XalanDOMString&	ATTRNAME_AMOUNT;
	static const XalanDOMString&	ATTRNAME_ANCESTOR;
	static const XalanDOMString&	ATTRNAME_ATTRIBUTE;
	static const XalanDOMString&	ATTRNAME_ATTRIBUTE_SET;
	static const XalanDOMString&	ATTRNAME_CASEORDER;
	static const XalanDOMString&	ATTRNAME_CLASS;
	static const XalanDOMString&	ATTRNAME_COMPONENTS;
	static const XalanDOMString&	ATTRNAME_CONDITION;
	static const XalanDOMString&	ATTRNAME_COPYTYPE;
	static const XalanDOMString&	ATTRNAME_COUNT;
	static const XalanDOMString&	ATTRNAME_DATATYPE;
	static const XalanDOMString&	ATTRNAME_DECIMALSEPARATOR;
	static const XalanDOMString&	ATTRNAME_DEFAULT;
	static const XalanDOMString&	ATTRNAME_DEFAULTSPACE;
	static const XalanDOMString&	ATTRNAME_DEPTH;
	static const XalanDOMString&	ATTRNAME_DIGIT;
	static const XalanDOMString&	ATTRNAME_DIGITGROUPSEP;
	static const XalanDOMString&	ATTRNAME_ELEMENT;
	static const XalanDOMString&	ATTRNAME_ELEMENTS;
	static const XalanDOMString&	ATTRNAME_ESCAPE_URLS;
	static const XalanDOMString&	ATTRNAME_EXCLUDE_RESULT_PREFIXES;
	static const XalanDOMString&	ATTRNAME_EXPR;
	static const XalanDOMString&	ATTRNAME_EXTENSIONELEMENTPREFIXES;
	static const XalanDOMString&	ATTRNAME_FORMAT;
	static const XalanDOMString&	ATTRNAME_FROM;
	static const XalanDOMString&	ATTRNAME_FUNCTIONS;
	static const XalanDOMString&	ATTRNAME_GROUPINGSEPARATOR;
	static const XalanDOMString&	ATTRNAME_GROUPINGSIZE;
	static const XalanDOMString&	ATTRNAME_HREF;
	static const XalanDOMString&	ATTRNAME_ID;
	static const XalanDOMString&	ATTRNAME_INDENTAMOUNT;
	static const XalanDOMString&	ATTRNAME_INDENTRESULT;
	static const XalanDOMString&	ATTRNAME_INFINITY;
	static const XalanDOMString&	ATTRNAME_LANG;
	static const XalanDOMString&	ATTRNAME_LETTERVALUE;
	static const XalanDOMString&	ATTRNAME_LEVEL;
	static const XalanDOMString&	ATTRNAME_MATCH;
	static const XalanDOMString&	ATTRNAME_MINUSSIGN;
	static const XalanDOMString&	ATTRNAME_MODE;
	static const XalanDOMString&	ATTRNAME_NAME;
	static const XalanDOMString&	ATTRNAME_NAMESPACE;
	static const XalanDOMString&	ATTRNAME_NAN;
	static const XalanDOMString&	ATTRNAME_NDIGITSPERGROUP;
	static const XalanDOMString&	ATTRNAME_OMIT_META_TAG;
	static const XalanDOMString&	ATTRNAME_ONLY;
	static const XalanDOMString&	ATTRNAME_ORDER;
	static const XalanDOMString&	ATTRNAME_PATTERNSEPARATOR;
	static const XalanDOMString&	ATTRNAME_PERCENT;
	static const XalanDOMString&	ATTRNAME_PERMILLE;
	static const XalanDOMString&	ATTRNAME_PREFIX;
	static const XalanDOMString&	ATTRNAME_PRIORITY;
	static const XalanDOMString&	ATTRNAME_REFID;
	static const XalanDOMString&	ATTRNAME_RESULTNS;
	static const XalanDOMString&	ATTRNAME_RESULT_PREFIX;
	static const XalanDOMString&	ATTRNAME_SCRIPT;
	static const XalanDOMString&	ATTRNAME_SELECT;
	static const XalanDOMString&	ATTRNAME_SRC;
	static const XalanDOMString&	ATTRNAME_STYLE;
	static const XalanDOMString&	ATTRNAME_STYLESHEET_PREFIX;
	static const XalanDOMString&	ATTRNAME_TERMINATE;
	static const XalanDOMString&	ATTRNAME_TEST;
	static const XalanDOMString&	ATTRNAME_TOSTRING;
	static const XalanDOMString&	ATTRNAME_TYPE;
	static const XalanDOMString&	ATTRNAME_USE;
	static const XalanDOMString&	ATTRNAME_USEATTRIBUTESETS;
	static const XalanDOMString&	ATTRNAME_VALUE;
	static const XalanDOMString&	ATTRNAME_VERSION;
	static const XalanDOMString&	ATTRNAME_XMLNS;
	static const XalanDOMString&	ATTRNAME_XMLNSDEF;
	static const XalanDOMString&	ATTRNAME_XMLSPACE;
	static const XalanDOMString&	ATTRNAME_ZERODIGIT;
 
	  // Atributes on the functions element
	static const XalanDOMString&	ATTRNAME_NS;
	static const XalanDOMString&	ATTRNAME_CLASSID;
	static const XalanDOMString&	ATTRNAME_ARCHIVE;
	static const XalanDOMString&	ATTRNAME_CODETYPE;
	static const XalanDOMString&	ATTRNAME_CODEBASE;
	static const XalanDOMString&	ATTRNAME_METHOD;
  
	static const XalanDOMString&	ATTRTYPE_CDATA;

	  // For space-att
	static const XalanDOMString&	ATTRVAL_PRESERVE;
	static const XalanDOMString&	ATTRVAL_STRIP;
  
	  // For indent-result
	static const XalanDOMString&	ATTRVAL_YES;
	static const XalanDOMString&	ATTRVAL_NO;
  
	  // For letter-value attribute (part of conversion attributes).
	static const XalanDOMString&	ATTRVAL_ALPHABETIC;
	static const XalanDOMString&	ATTRVAL_OTHER;
    static const XalanDOMString&	ATTRVAL_TRADITIONAL;

	  // For level attribute in xsl:number.
	static const XalanDOMString&	ATTRVAL_SINGLE;
	static const XalanDOMString&	ATTRVAL_MULTI;
	static const XalanDOMString&	ATTRVAL_ANY;

	// Output stuff
	static const XalanDOMString&	ATTRNAME_OUTPUT_METHOD;
	static const XalanDOMString&	ATTRNAME_DISABLE_OUTPUT_ESCAPING;
	static const XalanDOMString&	ATTRNAME_OUTPUT_CDATA_SECTION_ELEMENTS;
	static const XalanDOMString&	ATTRNAME_OUTPUT_DOCTYPE_PUBLIC;
	static const XalanDOMString&	ATTRNAME_OUTPUT_DOCTYPE_SYSTEM;
	static const XalanDOMString&	ATTRNAME_OUTPUT_ENCODING;
	static const XalanDOMString&	ATTRNAME_OUTPUT_INDENT;
	static const XalanDOMString&	ATTRNAME_OUTPUT_MEDIATYPE;
	static const XalanDOMString&	ATTRNAME_OUTPUT_STANDALONE;
	static const XalanDOMString&	ATTRNAME_OUTPUT_VERSION;
   static const XalanDOMString&	ATTRNAME_OUTPUT_OMITXMLDECL;

	static const XalanDOMString&	ATTRVAL_OUTPUT_METHOD_HTML;
	static const XalanDOMString&	ATTRVAL_OUTPUT_METHOD_XML;
	static const XalanDOMString&	ATTRVAL_OUTPUT_METHOD_TEXT;

	static const XalanDOMString&	ATTRVAL_THIS;

  // Stuff for sorting
	static const XalanDOMString&	ATTRVAL_DATATYPE_TEXT;
	static const XalanDOMString&	ATTRVAL_DATATYPE_NUMBER;
	static const XalanDOMString&	ATTRVAL_ORDER_ASCENDING;
	static const XalanDOMString&	ATTRVAL_ORDER_DESCENDING;
	static const XalanDOMString&	ATTRVAL_CASEORDER_UPPER;
	static const XalanDOMString&	ATTRVAL_CASEORDER_LOWER;

	// Stuff for xsl:decimal-format...
	static const XalanDOMString&	ATTRVAL_INFINITY;
	static const XalanDOMString&	ATTRVAL_NAN;

	static const XalanDOMString&	ATTRVAL_SIMPLE;

	// Default whitespace separator string for StringTokenizer.
	static const XalanDOMString&	DEFAULT_WHITESPACE_SEPARATOR_STRING;

	// Value for default text rule
	static const XalanDOMString&	ATTRVAL_DEFAULT_TEXT_RULE;
	enum eNumberLevel
	{
		/*
		 * Integer equivalents for above
		 */
		NUMBERLEVEL_SINGLE = 1,
		NUMBERLEVEL_MULTI = 2,
		NUMBERLEVEL_ANY = 3,

		MAX_MULTI_COUNTING_DEPTH = 32
	};

	static const XalanDOMString&	ATTRVAL_DEFAULT;

	// For Stylesheet-prefix and result-prefix in xsl:namespace-alias 
	static const XalanDOMString&	ATTRVAL_DEFAULT_PREFIX;

	enum eAttributeName
	{
		TATTRNAME_OUTPUT_METHOD = 1,
		TATTRNAME_AMOUNT = 2,
		TATTRNAME_ANCESTOR = 3,
		TATTRNAME_ARCHIVE = 4,
		TATTRNAME_ATTRIBUTE = 5,
		TATTRNAME_ATTRIBUTE_SET = 6,
		TATTRNAME_CASEORDER = 7,
		TATTRNAME_CLASS = 8,
		TATTRNAME_CLASSID = 9,
		TATTRNAME_CODEBASE = 10,
		TATTRNAME_CODETYPE = 11,
		TATTRNAME_CONDITION = 12,
		TATTRNAME_COPYTYPE = 13,
		TATTRNAME_COUNT = 14,
		TATTRNAME_DATATYPE = 15,
		TATTRNAME_DEFAULT = 16,
		TATTRNAME_DEFAULTSPACE = 17,
		TATTRNAME_DEPTH = 18,
		TATTRNAME_DIGITGROUPSEP = 19,
		TATTRNAME_DISABLE_OUTPUT_ESCAPING= 20,
		TATTRNAME_ELEMENT = 21,
		TATTRNAME_ELEMENTS = 22,
		TATTRNAME_EXPR = 23,
		TATTRNAME_EXTENSIONELEMENTPREFIXES = 24,
		TATTRNAME_FORMAT = 25,
		TATTRNAME_FROM = 26,
		TATTRNAME_GROUPINGSEPARATOR = 27,
		TATTRNAME_GROUPINGSIZE = 28,
		TATTRNAME_HREF = 29,
		TATTRNAME_ID = 30,
		TATTRNAME_INDENTRESULT = 32,
		TATTRNAME_LANG = 33,
		TATTRNAME_LETTERVALUE = 34,
		TATTRNAME_LEVEL = 35,
		TATTRNAME_MATCH = 36,
		TATTRNAME_METHOD = 37,
		TATTRNAME_MODE = 38,
		TATTRNAME_NAME = 39,
		TATTRNAME_NAMESPACE = 40,
		TATTRNAME_NDIGITSPERGROUP = 41,
		TATTRNAME_NS = 42,
		TATTRNAME_ONLY = 43,
		TATTRNAME_ORDER = 44,
		TATTRNAME_OUTPUT_CDATA_SECTION_ELEMENTS= 45,
		TATTRNAME_OUTPUT_DOCTYPE_PUBLIC = 46,
		TATTRNAME_OUTPUT_DOCTYPE_SYSTEM = 47,
		TATTRNAME_OUTPUT_ENCODING = 48,
		TATTRNAME_OUTPUT_INDENT = 49,
		TATTRNAME_OUTPUT_MEDIATYPE = 50,
		TATTRNAME_OUTPUT_STANDALONE= 51,
		TATTRNAME_OUTPUT_VERSION = 52,
		TATTRNAME_OUTPUT_OMITXMLDECL = 53,
		TATTRNAME_PRIORITY = 54,
		TATTRNAME_REFID = 55,
		TATTRNAME_RESULTNS = 56,
		TATTRNAME_SELECT = 57,
		TATTRNAME_STYLE = 59,
		TATTRNAME_TEST = 60,
		TATTRNAME_TOSTRING = 61,
		TATTRNAME_TYPE = 62,
		TATTRNAME_USE = 63,
		TATTRNAME_USEATTRIBUTESETS = 64,
		TATTRNAME_VALUE = 65,
		TATTRNAME_XMLNSDEF = 66,
		TATTRNAME_XMLNS = 67,
		TATTRNAME_XMLSPACE = 68,
		TATTRNAME_EXCLUDE_RESULT_PREFIXES = 69
	};

	// These are used mainly for keys in the pattern lookup table,
	// for those nodes that don't have unique lookup values
	static const XalanDOMString&	PSEUDONAME_ANY;
	static const XalanDOMString&	PSEUDONAME_COMMENT;
	static const XalanDOMString&	PSEUDONAME_NODE;
	static const XalanDOMString&	PSEUDONAME_OTHER;
	static const XalanDOMString&	PSEUDONAME_PI;
	static const XalanDOMString&	PSEUDONAME_ROOT;
	static const XalanDOMString&	PSEUDONAME_TEXT;

};


#endif	// XALAN_CONSTANTS_HEADER_GUARD
