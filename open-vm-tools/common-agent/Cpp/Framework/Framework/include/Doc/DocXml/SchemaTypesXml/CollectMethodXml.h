/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (C) 2012-2016 VMware, Inc.  All rights reserved. -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppXml". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#ifndef CollectMethodXml_h_
#define CollectMethodXml_h_


#include "Doc/SchemaTypesDoc/CCollectMethodDoc.h"

#include "Doc/DocXml/SchemaTypesXml/SchemaTypesXmlLink.h"
#include "Xml/XmlUtils/CXmlElement.h"

namespace Caf {

	/// Streams the CollectMethod class to/from XML
	namespace CollectMethodXml {

		/// Adds the CollectMethodDoc into the XML.
		void SCHEMATYPESXML_LINKAGE add(
			const SmartPtrCCollectMethodDoc collectMethodDoc,
			const SmartPtrCXmlElement thisXml);

		/// Parses the CollectMethodDoc from the XML.
		SmartPtrCCollectMethodDoc SCHEMATYPESXML_LINKAGE parse(
			const SmartPtrCXmlElement thisXml);
	}
}

#endif