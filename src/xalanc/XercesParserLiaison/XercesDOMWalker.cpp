/*
 * The Apache Software License, Version 1.1
 *
 *
 * Copyright (c) 2000-2003 The Apache Software Foundation.  All rights 
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
// Class header file.
#include "XercesDOMWalker.hpp"



#include <cassert>



// Xerces header files...
#include <xercesc/dom/DOMNode.hpp>



XALAN_CPP_NAMESPACE_BEGIN



XercesDOMWalker::XercesDOMWalker()
{
}



XercesDOMWalker::~XercesDOMWalker()
{
}



const DOMNodeType*
XercesDOMWalker::traverse(const DOMNodeType*	pos)
{
	assert(pos != 0);

	const DOMNodeType*	thePos = pos;

	bool	fStop = false;

	while(thePos != 0 && fStop == false)
	{
		fStop = startNode(thePos);

		const DOMNodeType*	nextNode = thePos->getFirstChild();

		while(nextNode == 0)
		{
			if (fStop == false)
			{
				fStop = endNode(thePos);
			}
			else
			{
				endNode(thePos);
			}

			nextNode = thePos->getNextSibling();

			if(nextNode == 0)
			{
				thePos = thePos->getParentNode();

				if(thePos == 0)
				{
					nextNode = thePos;

					break;
				}
			}
		}

		thePos = nextNode;
	}

	return thePos;
}



DOMNodeType*
XercesDOMWalker::traverse(DOMNodeType*	pos)
{
	assert(pos != 0);

	DOMNodeType*	thePos = pos;

	bool	fStop = false;

	while(thePos != 0 && fStop == false)
	{
		fStop = startNode(thePos);

		DOMNodeType*	nextNode = thePos->getFirstChild();

		while(nextNode == 0)
		{
			if (fStop == false)
			{
				fStop = endNode(thePos);
			}
			else
			{
				endNode(thePos);
			}

			nextNode = thePos->getNextSibling();

			if(nextNode == 0)
			{
				thePos = thePos->getParentNode();

				if(thePos == 0)
				{
					nextNode = thePos;

					break;
				}
			}
		}

		thePos = nextNode;
	}

	return thePos;
}



const DOMNodeType*
XercesDOMWalker::traverse(
			const DOMNodeType*	pos,
			const DOMNodeType*	parent)
{
	assert(pos != 0);
	assert(parent != 0);

	const DOMNodeType*	thePos = pos;

	bool	fStop = false;

	while(parent != thePos && fStop == false)
	{
		fStop = startNode(thePos);
	  
		const DOMNodeType*	nextNode = thePos->getFirstChild();

		while(nextNode == 0)
		{
			if (fStop == false)
			{
				fStop = endNode(thePos);
			}
			else
			{
				endNode(thePos);
			}

			nextNode = thePos->getNextSibling();

			if(nextNode == 0)
			{
				thePos = thePos->getParentNode();

				if(parent == thePos)
				{
					nextNode = thePos;

					break;
				}
			}
		}

		thePos = nextNode;
	}

	return thePos;
}



DOMNodeType*
XercesDOMWalker::traverse(
			DOMNodeType*	pos,
			DOMNodeType*	parent)
{
	assert(pos != 0);
	assert(parent != 0);

	DOMNodeType*	thePos = pos;

	bool	fStop = false;

	while(parent != thePos && fStop == false)
	{
		fStop = startNode(thePos);
	  
		DOMNodeType*	nextNode = thePos->getFirstChild();

		while(nextNode == 0)
		{
			if (fStop == false)
			{
				fStop = endNode(thePos);
			}
			else
			{
				endNode(thePos);
			}

			nextNode = thePos->getNextSibling();

			if(nextNode == 0)
			{
				thePos = thePos->getParentNode();

				if(parent == thePos)
				{
					nextNode = thePos;

					break;
				}
			}
		}

		thePos = nextNode;
	}

	return thePos;
}



void
XercesDOMWalker::traverseSubtree(const DOMNodeType*		pos)
{
	if (pos != 0)
	{
		startNode(pos);

		const DOMNodeType* const	theFirstChild = pos->getFirstChild();

		if (theFirstChild != 0)
		{
			traverse(theFirstChild, pos);
		}

		endNode(pos);
	}
}



void
XercesDOMWalker::traverseSubtree(DOMNodeType*	pos)
{
	if (pos != 0)
	{
		startNode(pos);

		DOMNodeType* const	theFirstChild = pos->getFirstChild();

		if (theFirstChild != 0)
		{
			traverse(theFirstChild, pos);
		}

		endNode(pos);
	}
}



bool
XercesDOMWalker::startNode(DOMNodeType*		node)
{
#if defined(XALAN_OLD_STYLE_CASTS)
	return startNode((const DOMNodeType*)node);
#else
	return startNode(const_cast<const DOMNodeType*>(node));
#endif
}



bool
XercesDOMWalker::endNode(DOMNodeType*	node)
{
#if defined(XALAN_OLD_STYLE_CASTS)
	return endNode((const DOMNodeType*)node);
#else
	return endNode(const_cast<const DOMNodeType*>(node));
#endif
}



XALAN_CPP_NAMESPACE_END
