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

#ifndef ActionClassXml_h_
#define ActionClassXml_h_


#include "Doc/SchemaTypesDoc/CActionClassDoc.h"

#include "Doc/DocXml/SchemaTypesXml/SchemaTypesXmlLink.h"
#include "Xml/XmlUtils/CXmlElement.h"

namespace Caf {

	/// Streams the ActionClass class to/from XML
	namespace ActionClassXml {

		/// Adds the ActionClassDoc into the XML.
		void SCHEMATYPESXML_LINKAGE add(
			const SmartPtrCActionClassDoc actionClassDoc,
			const SmartPtrCXmlElement thisXml);

		/// Parses the ActionClassDoc from the XML.
		SmartPtrCActionClassDoc SCHEMATYPESXML_LINKAGE parse(
			const SmartPtrCXmlElement thisXml);
	}
}

#endif
