/*
 * The Apache Software License, Version 1.1
 *
 *
 * Copyright (c) 1999-2002 The Apache Software Foundation.  All rights 
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
 */
#if !defined(XALANSOURCETREEHELPER_HEADER_GUARD_1357924680)
#define XALANSOURCETREEHELPER_HEADER_GUARD_1357924680



#include <xalanc/XalanSourceTree/XalanSourceTreeDefinitions.hpp>



#include <xalanc/XalanDOM/XalanDOMString.hpp>



XALAN_CPP_NAMESPACE_BEGIN



class XalanNode;
class XalanSourceTreeComment;
class XalanSourceTreeDocument;
class XalanSourceTreeDocumentFragment;
class XalanSourceTreeElement;
class XalanSourceTreeProcessingInstruction;
class XalanSourceTreeText;



class XALAN_XALANSOURCETREE_EXPORT XalanSourceTreeHelper
{
public:

	static XalanNode*
	getLastSibling(XalanNode*	theNode);

	static void
	appendSibling(
			XalanSourceTreeDocument*	theDocument,
			XalanNode*&					theNextSiblingSlot,
			XalanNode*					theNewSibling);

	static void
	appendSibling(
			XalanSourceTreeComment*		theNode,
			XalanNode*&					theNextSiblingSlot,
			XalanNode*					theNewSibling);

	static void
	appendSibling(
			XalanSourceTreeElement*		theNode,
			XalanNode*&					theNextSiblingSlot,
			XalanNode*					theNewSibling);

	static void
	appendSibling(
			XalanSourceTreeProcessingInstruction*	theNode,
			XalanNode*&								theNextSiblingSlot,
			XalanNode*								theNewSibling);

	static void
	appendSibling(
			XalanSourceTreeText*	theNode,
			XalanNode*&				theNextSiblingSlot,
			XalanNode*				theNewSibling);

	// New appendSibling interfaces...
	static void
	appendSibling(
			XalanNode*					theLastSibling,
			XalanSourceTreeComment*		theNewLastSibling);

	static void
	appendSibling(
			XalanNode*					theLastSibling,
			XalanSourceTreeElement*		theNewLastSibling);

	static void
	appendSibling(
			XalanNode*								theLastSibling,
			XalanSourceTreeProcessingInstruction*	theNewLastSibling);

	static void
	appendSibling(
			XalanNode*				theLastSibling,
			XalanSourceTreeText*	theNewLastSibling);


	static void
	appendSiblingToChild(
			XalanSourceTreeElement*		theOwnerElement,
			XalanNode*&					theFirstChildSlot,
			XalanSourceTreeComment*		theNewSibling);


	static void
	appendSiblingToChild(
			XalanSourceTreeElement*		theOwnerElement,
			XalanNode*&					theFirstChildSlot,
			XalanSourceTreeElement*		theNewSibling);

	static void
	appendSiblingToChild(
			XalanSourceTreeElement*					theOwnerElement,
			XalanNode*&								theFirstChildSlot,
			XalanSourceTreeProcessingInstruction*	theNewSibling);

	static void
	appendSiblingToChild(
			XalanSourceTreeElement*		theOwnerElement,
			XalanNode*&					theFirstChildSlot,
			XalanSourceTreeText*		theNewSibling);

	static void
	appendSiblingToChild(
			XalanSourceTreeDocumentFragment*	theOwnerDocumentFragment,
			XalanNode*&							theFirstChildSlot,
			XalanSourceTreeComment*				theNewSibling);

	static void
	appendSiblingToChild(
			XalanSourceTreeDocumentFragment*	theOwnerDocumentFragment,
			XalanNode*&							theFirstChildSlot,
			XalanSourceTreeElement*				theNewSibling);

	static void
	appendSiblingToChild(
			XalanSourceTreeDocumentFragment*		theOwnerDocumentFragment,
			XalanNode*&								theFirstChildSlot,
			XalanSourceTreeProcessingInstruction*	theNewSibling);

	static void
	appendSiblingToChild(
			XalanSourceTreeDocumentFragment*	theOwnerDocumentFragment,
			XalanNode*&							theFirstChildSlot,
			XalanSourceTreeText*				theNewSibling);

private:

	// Not implemented...
	XalanSourceTreeHelper();

	XalanSourceTreeHelper(const XalanSourceTreeHelper&);
};



XALAN_CPP_NAMESPACE_END



#endif	// !defined(XALANSOURCETREEHELPER_HEADER_GUARD_1357924680)
