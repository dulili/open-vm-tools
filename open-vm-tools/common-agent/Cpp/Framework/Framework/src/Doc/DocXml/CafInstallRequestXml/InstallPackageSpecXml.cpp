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

#include "stdafx.h"

#include "Doc/DocXml/CafCoreTypesXml/AttachmentCollectionXml.h"
#include "Doc/DocXml/CafCoreTypesXml/AttachmentNameCollectionXml.h"

#include "Doc/CafCoreTypesDoc/CAttachmentCollectionDoc.h"
#include "Doc/CafCoreTypesDoc/CAttachmentNameCollectionDoc.h"
#include "Doc/CafInstallRequestDoc/CInstallPackageSpecDoc.h"
#include "Xml/XmlUtils/CXmlElement.h"
#include "Doc/DocXml/CafInstallRequestXml/InstallPackageSpecXml.h"

using namespace Caf;

void InstallPackageSpecXml::add(
	const SmartPtrCInstallPackageSpecDoc installPackageSpecDoc,
	const SmartPtrCXmlElement thisXml) {
	CAF_CM_STATIC_FUNC_VALIDATE("InstallPackageSpecXml", "add");

	CAF_CM_ENTER {
		CAF_CM_VALIDATE_SMARTPTR(installPackageSpecDoc);
		CAF_CM_VALIDATE_SMARTPTR(thisXml);

		const std::string packageNamespaceVal = installPackageSpecDoc->getPackageNamespace();
		CAF_CM_VALIDATE_STRING(packageNamespaceVal);
		thisXml->addAttribute("packageNamespace", packageNamespaceVal);

		const std::string packageNameVal = installPackageSpecDoc->getPackageName();
		CAF_CM_VALIDATE_STRING(packageNameVal);
		thisXml->addAttribute("packageName", packageNameVal);

		const std::string packageVersionVal = installPackageSpecDoc->getPackageVersion();
		CAF_CM_VALIDATE_STRING(packageVersionVal);
		thisXml->addAttribute("packageVersion", packageVersionVal);

		const std::string startupAttachmentNameVal = installPackageSpecDoc->getStartupAttachmentName();
		CAF_CM_VALIDATE_STRING(startupAttachmentNameVal);
		thisXml->addAttribute("startupAttachmentName", startupAttachmentNameVal);

		const std::string packageAttachmentNameVal = installPackageSpecDoc->getPackageAttachmentName();
		CAF_CM_VALIDATE_STRING(packageAttachmentNameVal);
		thisXml->addAttribute("packageAttachmentName", packageAttachmentNameVal);

		const SmartPtrCAttachmentNameCollectionDoc supportingAttachmentNameCollectionVal =
			installPackageSpecDoc->getSupportingAttachmentNameCollection();
		if (! supportingAttachmentNameCollectionVal.IsNull()) {
			const SmartPtrCXmlElement supportingAttachmentNameCollectionXml =
				thisXml->createAndAddElement("attachmentNameCollection");
			AttachmentNameCollectionXml::add(supportingAttachmentNameCollectionVal, supportingAttachmentNameCollectionXml);
		}

		const SmartPtrCAttachmentCollectionDoc attachmentCollectionVal =
			installPackageSpecDoc->getAttachmentCollection();
		CAF_CM_VALIDATE_SMARTPTR(attachmentCollectionVal);

		const SmartPtrCXmlElement attachmentCollectionXml =
			thisXml->createAndAddElement("attachmentCollection");
		AttachmentCollectionXml::add(attachmentCollectionVal, attachmentCollectionXml);

		const std::string argumentsVal = installPackageSpecDoc->getArguments();
		if (! argumentsVal.empty()) {
			thisXml->addAttribute("arguments", argumentsVal);
		}

		thisXml->addAttribute("version", "1.0");
	}
	CAF_CM_EXIT;
}

SmartPtrCInstallPackageSpecDoc InstallPackageSpecXml::parse(
	const SmartPtrCXmlElement thisXml) {
	CAF_CM_STATIC_FUNC_VALIDATE("InstallPackageSpecXml", "parse");

	SmartPtrCInstallPackageSpecDoc installPackageSpecDoc;

	CAF_CM_ENTER {
		CAF_CM_VALIDATE_SMARTPTR(thisXml);

		const std::string packageNamespaceStrVal =
			thisXml->findRequiredAttribute("packageNamespace");
		const std::string packageNamespaceVal = packageNamespaceStrVal;

		const std::string packageNameStrVal =
			thisXml->findRequiredAttribute("packageName");
		const std::string packageNameVal = packageNameStrVal;

		const std::string packageVersionStrVal =
			thisXml->findRequiredAttribute("packageVersion");
		const std::string packageVersionVal = packageVersionStrVal;

		const std::string startupAttachmentNameStrVal =
			thisXml->findRequiredAttribute("startupAttachmentName");
		const std::string startupAttachmentNameVal = startupAttachmentNameStrVal;

		const std::string packageAttachmentNameStrVal =
			thisXml->findRequiredAttribute("packageAttachmentName");
		const std::string packageAttachmentNameVal = packageAttachmentNameStrVal;

		const SmartPtrCXmlElement supportingAttachmentNameCollectionXml =
			thisXml->findOptionalChild("attachmentNameCollection");

		SmartPtrCAttachmentNameCollectionDoc supportingAttachmentNameCollectionVal;
		if (! supportingAttachmentNameCollectionXml.IsNull()) {
			supportingAttachmentNameCollectionVal = AttachmentNameCollectionXml::parse(supportingAttachmentNameCollectionXml);
		}

		const SmartPtrCXmlElement attachmentCollectionXml =
			thisXml->findRequiredChild("attachmentCollection");

		SmartPtrCAttachmentCollectionDoc attachmentCollectionVal;
		if (! attachmentCollectionXml.IsNull()) {
			attachmentCollectionVal = AttachmentCollectionXml::parse(attachmentCollectionXml);
		}

		const std::string argumentsStrVal =
			thisXml->findOptionalAttribute("arguments");
		const std::string argumentsVal = argumentsStrVal;

		installPackageSpecDoc.CreateInstance();
		installPackageSpecDoc->initialize(
			packageNamespaceVal,
			packageNameVal,
			packageVersionVal,
			startupAttachmentNameVal,
			packageAttachmentNameVal,
			supportingAttachmentNameCollectionVal,
			attachmentCollectionVal,
			argumentsVal);
	}
	CAF_CM_EXIT;

	return installPackageSpecDoc;
}

