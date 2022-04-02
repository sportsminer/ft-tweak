/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMNode : IKJSObject <IKJSDOMEventTarget, IKJSDOMNode, NSObject, _IKJSDOMNode, _IKJSDOMNodeProxy> {
    long long  _ITMLID;
    IKJSDataItem * _boxedDataItem;
    NSHashTable * _domObservers;
    NSMutableDictionary * _eventListenersMap;
    NSString * _identifier;
    JSManagedValue * _managedChildNodeList;
    JSManagedValue * _managedDataItem;
    JSManagedValue * _managedOwnerDocument;
    JSManagedValue * _managedParent;
    JSManagedValue * _managedSelf;
    struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; } * _nodePtr;
}

@property (nonatomic) long long ITMLID;
@property (nonatomic, retain) IKJSDataItem *boxedDataItem;
@property (nonatomic, readonly, retain) IKDOMNodeList *childNodes;
@property (nonatomic) JSValue *dataItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSHashTable *domObservers;
@property (nonatomic, retain) NSMutableDictionary *eventListenersMap;
@property (nonatomic, readonly, retain) IKDOMNode *firstChild;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly, retain) IKDOMNodeData *jsNodeData;
@property (nonatomic, readonly, retain) IKDOMNode *lastChild;
@property (nonatomic, retain) JSManagedValue *managedChildNodeList;
@property (nonatomic, retain) JSManagedValue *managedOwnerDocument;
@property (nonatomic, retain) JSManagedValue *managedParent;
@property (nonatomic, readonly, retain) JSManagedValue *managedSelf;
@property (nonatomic, readonly) IKDOMNode *nextSibling;
@property (nonatomic, readonly, retain) NSString *nodeName;
@property (nonatomic, readonly) long long nodeType;
@property (nonatomic, retain) NSString *nodeValue;
@property (nonatomic, readonly) IKDOMDocument *ownerDocument;
@property (nonatomic, readonly) IKDOMNode *parentNode;
@property (nonatomic, readonly) IKDOMNode *previousSibling;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *textContent;

+ (long long)ITMLIDForITMLIDString:(id)arg1;
+ (id)ITMLIDStringforITMLID:(unsigned long long)arg1;
+ (id)_eventListenerMapKeyForType:(id)arg1 useCapture:(bool)arg2;
+ (void)handleNodeParentDidChange:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
+ (void)handleNodeWillRelease:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
+ (id)nodeWithAppContext:(id)arg1 nodePtr:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg2;

- (void).cxx_destruct;
- (long long)ITMLID;
- (struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)_appendNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
- (void)_childrenUpdatedWithUpdatedChildNodes:(id)arg1 withDocument:(id)arg2;
- (bool)_enumerateNodesWithBlock:(id /* block */)arg1;
- (struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)_insertNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 refNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg2 operation:(unsigned long long)arg3;
- (void)_linkManagedObjects;
- (void)_markSubtreeUpdatesForAncestorsOfNode:(id)arg1;
- (void)_notifyUpdatesToDOMObservers;
- (bool)_searchEventListener:(id)arg1 key:(id)arg2 destroy:(bool)arg3;
- (void)_unlinkManagedObjects;
- (void)_updatedAndMark:(bool)arg1 withDocument:(id)arg2;
- (bool)_validateDOMOperation:(unsigned long long)arg1 newNode:(id)arg2 refNode:(id)arg3;
- (void)addDOMObserver:(id)arg1;
- (void)addEventListener:(id)arg1 :(id)arg2 :(bool)arg3;
- (id)appendChild:(id)arg1;
- (id)asPrivateIKJSDOMNode;
- (id)boxedDataItem;
- (unsigned long long)childElementCount;
- (id)childNodes;
- (id)childNodesAsArray;
- (id)children;
- (void)childrenUpdatedWithUpdatedChildNodes:(id)arg1 notify:(bool)arg2;
- (id)cloneNode:(bool)arg1;
- (bool)contains:(id)arg1;
- (id)dataItem;
- (void)dealloc;
- (id)description;
- (bool)dispatchEvent:(id)arg1;
- (id)domObservers;
- (void)enumerateEventListenersUsingBlock:(id /* block */)arg1;
- (void)enumerateEventListernersForType:(id)arg1 xmlAttribute:(id)arg2 phase:(long long)arg3 usingBlock:(id /* block */)arg4;
- (id)eventListenersMap;
- (id)firstChild;
- (id)firstElementChild;
- (id)getFeature:(id)arg1 :(id)arg2;
- (bool)hasChildNodes;
- (id)identifier;
- (id)ik_nodePath;
- (id)ik_nodeWithId:(long long)arg1;
- (id)ik_nodesWithIds:(id)arg1;
- (id)ik_pathsForSearchQuery:(id)arg1 currentPath:(id)arg2;
- (id)initWithAppContext:(id)arg1 xmlNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg2;
- (id)insertBefore:(id)arg1 :(id)arg2;
- (bool)isEqualNode:(id)arg1;
- (bool)isSameNode:(id)arg1;
- (id)jsNodeData;
- (id)lastChild;
- (id)lastElementChild;
- (id)managedChildNodeList;
- (id)managedOwnerDocument;
- (id)managedParent;
- (id)managedSelf;
- (id)nextSibling;
- (id)nodeName;
- (struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)nodePtr;
- (long long)nodeType;
- (id)nodeValue;
- (id)nodesForXPath:(id)arg1 error:(id*)arg2;
- (id)ownerDocument;
- (id)parentNode;
- (id)performDOMOperation:(unsigned long long)arg1 newNode:(id)arg2 refNode:(id)arg3;
- (id)previousSibling;
- (id)removeChild:(id)arg1;
- (void)removeDOMObserver:(id)arg1;
- (void)removeEventListener:(id)arg1 :(id)arg2 :(bool)arg3;
- (id)replaceChild:(id)arg1 :(id)arg2;
- (void)setBoxedDataItem:(id)arg1;
- (void)setDataItem:(id)arg1;
- (void)setDomObservers:(id)arg1;
- (void)setEventListenersMap:(id)arg1;
- (void)setITMLID:(long long)arg1;
- (void)setManagedChildNodeList:(id)arg1;
- (void)setManagedOwnerDocument:(id)arg1;
- (void)setManagedParent:(id)arg1;
- (void)setNodeValue:(id)arg1;
- (void)setTextContent:(id)arg1;
- (id)textContent;
- (void)updatedAndMark:(bool)arg1 notify:(bool)arg2;
- (id)writeToStringWithError:(id*)arg1;

@end
