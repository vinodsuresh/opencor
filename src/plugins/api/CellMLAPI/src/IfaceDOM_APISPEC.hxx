/* This file is automatically generated from DOM_APISPEC.idl
 * DO NOT EDIT DIRECTLY OR CHANGES WILL BE LOST!
 */
#ifndef _GUARD_IFACE_DOMAPISPEC
#define _GUARD_IFACE_DOMAPISPEC
#include "cda_compiler_support.h"
#ifdef MODULE_CONTAINS_DOMAPISPEC
#define PUBLIC_DOMAPISPEC_PRE CDA_EXPORT_PRE
#define PUBLIC_DOMAPISPEC_POST CDA_EXPORT_POST
#else
#define PUBLIC_DOMAPISPEC_PRE CDA_IMPORT_PRE
#define PUBLIC_DOMAPISPEC_POST CDA_IMPORT_POST
#endif
#include "Ifacexpcom.hxx"
namespace iface
{
  namespace dom
  {
    typedef std::wstring& DOMString;
    typedef uint64_t DOMTimeStamp;
    class DocumentType;
    class Document;
    class NodeList;
    class NamedNodeMap;
    class Element;
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST DOMException : public std::exception
    {
    public:
      DOMException(){}
    };
    static const uint16_t INDEX_SIZE_ERR = 1;
    static const uint16_t DOMSTRING_SIZE_ERR = 2;
    static const uint16_t HIERARCHY_REQUEST_ERR = 3;
    static const uint16_t WRONG_DOCUMENT_ERR = 4;
    static const uint16_t INVALID_CHARACTER_ERR = 5;
    static const uint16_t NO_DATA_ALLOWED_ERR = 6;
    static const uint16_t NO_MODIFICATION_ALLOWED_ERR = 7;
    static const uint16_t NOT_FOUND_ERR = 8;
    static const uint16_t NOT_SUPPORTED_ERR = 9;
    static const uint16_t INUSE_ATTRIBUTE_ERR = 10;
    static const uint16_t INVALID_STATE_ERR = 11;
    static const uint16_t SYNTAX_ERR = 12;
    static const uint16_t INVALID_MODIFICATION_ERR = 13;
    static const uint16_t NAMESPACE_ERR = 14;
    static const uint16_t INVALID_ACCESS_ERR = 15;
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST DOMImplementation
     : public virtual iface::XPCOM::IObject
    {
    public:
      static const char* INTERFACE_NAME() { return "iface::dom::DOMImplementation"; }
      virtual ~DOMImplementation() {}
      virtual bool hasFeature(const std::wstring& feature, const std::wstring& version) throw(std::exception&) = 0;
      virtual already_AddRefd<iface::dom::DocumentType>  createDocumentType(const std::wstring& qualifiedName, const std::wstring& publicId, const std::wstring& systemId) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::Document>  createDocument(const std::wstring& namespaceURI, const std::wstring& qualifiedName, iface::dom::DocumentType* doctype) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
    };
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST Node
     : public virtual iface::XPCOM::IObject
    {
    public:
      static const char* INTERFACE_NAME() { return "iface::dom::Node"; }
      virtual ~Node() {}
      static const uint16_t ELEMENT_NODE = 1;
      static const uint16_t ATTRIBUTE_NODE = 2;
      static const uint16_t TEXT_NODE = 3;
      static const uint16_t CDATA_SECTION_NODE = 4;
      static const uint16_t ENTITY_REFERENCE_NODE = 5;
      static const uint16_t ENTITY_NODE = 6;
      static const uint16_t PROCESSING_INSTRUCTION_NODE = 7;
      static const uint16_t COMMENT_NODE = 8;
      static const uint16_t DOCUMENT_NODE = 9;
      static const uint16_t DOCUMENT_TYPE_NODE = 10;
      static const uint16_t DOCUMENT_FRAGMENT_NODE = 11;
      static const uint16_t NOTATION_NODE = 12;
      virtual std::wstring nodeName() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual std::wstring nodeValue() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual void nodeValue(const std::wstring& attr) throw(std::exception&) = 0;
      virtual uint16_t nodeType() throw(std::exception&)  = 0;
      virtual already_AddRefd<iface::dom::Node>  parentNode() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::NodeList>  childNodes() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::Node>  firstChild() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::Node>  lastChild() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::Node>  previousSibling() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::Node>  nextSibling() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::NamedNodeMap>  attributes() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::Document>  ownerDocument() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::Node>  insertBefore(iface::dom::Node* newChild, iface::dom::Node* refChild) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::Node>  replaceChild(iface::dom::Node* newChild, iface::dom::Node* oldChild) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::Node>  removeChild(iface::dom::Node* oldChild) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::Node>  appendChild(iface::dom::Node* newChild) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual bool hasChildNodes() throw(std::exception&) = 0;
      virtual already_AddRefd<iface::dom::Node>  cloneNode(bool deep) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual void normalize() throw(std::exception&) = 0;
      virtual bool isSupported(const std::wstring& feature, const std::wstring& version) throw(std::exception&) = 0;
      virtual std::wstring namespaceURI() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual std::wstring prefix() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual void prefix(const std::wstring& attr) throw(std::exception&) = 0;
      virtual std::wstring localName() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual bool hasAttributes() throw(std::exception&) = 0;
    };
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST NodeList
     : public virtual iface::XPCOM::IObject
    {
    public:
      static const char* INTERFACE_NAME() { return "iface::dom::NodeList"; }
      virtual ~NodeList() {}
      virtual already_AddRefd<iface::dom::Node>  item(uint32_t index) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual uint32_t length() throw(std::exception&)  = 0;
    };
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST NamedNodeMap
     : public virtual iface::XPCOM::IObject
    {
    public:
      static const char* INTERFACE_NAME() { return "iface::dom::NamedNodeMap"; }
      virtual ~NamedNodeMap() {}
      virtual already_AddRefd<iface::dom::Node>  getNamedItem(const std::wstring& name) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::Node>  setNamedItem(iface::dom::Node* arg) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::Node>  removeNamedItem(const std::wstring& name) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::Node>  item(uint32_t index) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual uint32_t length() throw(std::exception&)  = 0;
      virtual already_AddRefd<iface::dom::Node>  getNamedItemNS(const std::wstring& namespaceURI, const std::wstring& localName) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::Node>  setNamedItemNS(iface::dom::Node* arg) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::Node>  removeNamedItemNS(const std::wstring& namespaceURI, const std::wstring& localName) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
    };
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST CharacterData
     : public virtual iface::dom::Node
    {
    public:
      static const char* INTERFACE_NAME() { return "iface::dom::CharacterData"; }
      virtual ~CharacterData() {}
      virtual std::wstring data() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual void data(const std::wstring& attr) throw(std::exception&) = 0;
      virtual uint32_t length() throw(std::exception&)  = 0;
      virtual std::wstring substringData(uint32_t offset, uint32_t count) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual void appendData(const std::wstring& arg) throw(std::exception&) = 0;
      virtual void insertData(uint32_t offset, const std::wstring& arg) throw(std::exception&) = 0;
      virtual void deleteData(uint32_t offset, uint32_t count) throw(std::exception&) = 0;
      virtual void replaceData(uint32_t offset, uint32_t count, const std::wstring& arg) throw(std::exception&) = 0;
    };
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST Attr
     : public virtual iface::dom::Node
    {
    public:
      static const char* INTERFACE_NAME() { return "iface::dom::Attr"; }
      virtual ~Attr() {}
      virtual std::wstring name() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual bool specified() throw(std::exception&)  = 0;
      virtual std::wstring value() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual void value(const std::wstring& attr) throw(std::exception&) = 0;
      virtual already_AddRefd<iface::dom::Element>  ownerElement() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
    };
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST Element
     : public virtual iface::dom::Node
    {
    public:
      static const char* INTERFACE_NAME() { return "iface::dom::Element"; }
      virtual ~Element() {}
      virtual std::wstring tagName() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual std::wstring getAttribute(const std::wstring& name) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual void setAttribute(const std::wstring& name, const std::wstring& value) throw(std::exception&) = 0;
      virtual void removeAttribute(const std::wstring& name) throw(std::exception&) = 0;
      virtual already_AddRefd<iface::dom::Attr>  getAttributeNode(const std::wstring& name) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::Attr>  setAttributeNode(iface::dom::Attr* newAttr) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::Attr>  removeAttributeNode(iface::dom::Attr* oldAttr) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::NodeList>  getElementsByTagName(const std::wstring& name) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual std::wstring getAttributeNS(const std::wstring& namespaceURI, const std::wstring& localName) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual void setAttributeNS(const std::wstring& namespaceURI, const std::wstring& qualifiedName, const std::wstring& value) throw(std::exception&) = 0;
      virtual void removeAttributeNS(const std::wstring& namespaceURI, const std::wstring& localName) throw(std::exception&) = 0;
      virtual already_AddRefd<iface::dom::Attr>  getAttributeNodeNS(const std::wstring& namespaceURI, const std::wstring& localName) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::Attr>  setAttributeNodeNS(iface::dom::Attr* newAttr) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::NodeList>  getElementsByTagNameNS(const std::wstring& namespaceURI, const std::wstring& localName) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual bool hasAttribute(const std::wstring& name) throw(std::exception&) = 0;
      virtual bool hasAttributeNS(const std::wstring& namespaceURI, const std::wstring& localName) throw(std::exception&) = 0;
    };
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST Text
     : public virtual iface::dom::CharacterData
    {
    public:
      static const char* INTERFACE_NAME() { return "iface::dom::Text"; }
      virtual ~Text() {}
      virtual already_AddRefd<iface::dom::Text>  splitText(uint32_t offset) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
    };
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST Comment
     : public virtual iface::dom::CharacterData
    {
    public:
      static const char* INTERFACE_NAME() { return "iface::dom::Comment"; }
      virtual ~Comment() {}
    };
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST CDATASection
     : public virtual iface::dom::Text
    {
    public:
      static const char* INTERFACE_NAME() { return "iface::dom::CDATASection"; }
      virtual ~CDATASection() {}
    };
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST DocumentType
     : public virtual iface::dom::Node
    {
    public:
      static const char* INTERFACE_NAME() { return "iface::dom::DocumentType"; }
      virtual ~DocumentType() {}
      virtual std::wstring name() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::NamedNodeMap>  entities() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::NamedNodeMap>  notations() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual std::wstring publicId() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual std::wstring systemId() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual std::wstring internalSubset() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
    };
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST Notation
     : public virtual iface::dom::Node
    {
    public:
      static const char* INTERFACE_NAME() { return "iface::dom::Notation"; }
      virtual ~Notation() {}
      virtual std::wstring publicId() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual std::wstring systemId() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
    };
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST Entity
     : public virtual iface::dom::Node
    {
    public:
      static const char* INTERFACE_NAME() { return "iface::dom::Entity"; }
      virtual ~Entity() {}
      virtual std::wstring publicId() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual std::wstring systemId() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual std::wstring notationName() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
    };
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST EntityReference
     : public virtual iface::dom::Node
    {
    public:
      static const char* INTERFACE_NAME() { return "iface::dom::EntityReference"; }
      virtual ~EntityReference() {}
    };
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST ProcessingInstruction
     : public virtual iface::dom::Node
    {
    public:
      static const char* INTERFACE_NAME() { return "iface::dom::ProcessingInstruction"; }
      virtual ~ProcessingInstruction() {}
      virtual std::wstring target() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual std::wstring data() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual void data(const std::wstring& attr) throw(std::exception&) = 0;
    };
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST DocumentFragment
     : public virtual iface::dom::Node
    {
    public:
      static const char* INTERFACE_NAME() { return "iface::dom::DocumentFragment"; }
      virtual ~DocumentFragment() {}
    };
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST Document
     : public virtual iface::dom::Node
    {
    public:
      static const char* INTERFACE_NAME() { return "iface::dom::Document"; }
      virtual ~Document() {}
      virtual already_AddRefd<iface::dom::DocumentType>  doctype() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::DOMImplementation>  implementation() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::Element>  documentElement() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::Element>  createElement(const std::wstring& tagName) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::DocumentFragment>  createDocumentFragment() throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::Text>  createTextNode(const std::wstring& data) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::Comment>  createComment(const std::wstring& data) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::CDATASection>  createCDATASection(const std::wstring& data) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::ProcessingInstruction>  createProcessingInstruction(const std::wstring& target, const std::wstring& data) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::Attr>  createAttribute(const std::wstring& name) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::EntityReference>  createEntityReference(const std::wstring& name) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::NodeList>  getElementsByTagName(const std::wstring& tagname) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::Node>  importNode(iface::dom::Node* importedNode, bool deep) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::Element>  createElementNS(const std::wstring& namespaceURI, const std::wstring& qualifiedName) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::Attr>  createAttributeNS(const std::wstring& namespaceURI, const std::wstring& qualifiedName) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::NodeList>  getElementsByTagNameNS(const std::wstring& namespaceURI, const std::wstring& localName) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual already_AddRefd<iface::dom::Element>  getElementById(const std::wstring& elementId) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
    };
  };
};
#undef PUBLIC_DOMAPISPEC_PRE
#undef PUBLIC_DOMAPISPEC_POST
#endif // guard
