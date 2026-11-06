#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class IdentityFamilies : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IdentityFamilies(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "IdentityFamilies") {}
    public:
        void* Get(int id) const { void* __callArgs[] = { &id }; return Call("Get", __callArgs, 1); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void* Add(int axis, const char* name, int parentId, void* fill, bool grand = false) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { &axis, managed_1, &parentId, fill, &grand }; return Call("Add", __callArgs, 5); }
        void TouchVersion() const { Call("TouchVersion", nullptr, 0); }
        void Rename(int id, const char* name) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { &id, managed_1 }; Call("Rename", __callArgs, 2); }
        bool HasAny(int axis) const { void* __callArgs[] = { &axis }; return CallValue<bool>("HasAny", __callArgs, 1); }
        int ParentOf(int id) const { void* __callArgs[] = { &id }; return CallValue<int>("ParentOf", __callArgs, 1); }
        int DepthOf(int id) const { void* __callArgs[] = { &id }; return CallValue<int>("DepthOf", __callArgs, 1); }
        int RootOf(int id) const { void* __callArgs[] = { &id }; return CallValue<int>("RootOf", __callArgs, 1); }
        int AncestorAtDepth(int id, int depth) const { void* __callArgs[] = { &id, &depth }; return CallValue<int>("AncestorAtDepth", __callArgs, 2); }
        int MapNodeOf(int node, bool broadest) const { void* __callArgs[] = { &node, &broadest }; return CallValue<int>("MapNodeOf", __callArgs, 2); }
        int MapStepsOf(int node) const { void* __callArgs[] = { &node }; return CallValue<int>("MapStepsOf", __callArgs, 1); }
        int MapNodeAtLevel(int node, int level) const { void* __callArgs[] = { &node, &level }; return CallValue<int>("MapNodeAtLevel", __callArgs, 2); }
        bool IsUnder(int id, int ancestor) const { void* __callArgs[] = { &id, &ancestor }; return CallValue<bool>("IsUnder", __callArgs, 2); }
        int Lca(int a, int b) const { void* __callArgs[] = { &a, &b }; return CallValue<int>("Lca", __callArgs, 2); }
        int RelationOfNodes(int a, int b) const { void* __callArgs[] = { &a, &b }; return CallValue<int>("RelationOfNodes", __callArgs, 2); }
        int FamilyOfGroup(void* g, void* get) const { void* __callArgs[] = { g, get }; return CallStaticValue<int>("FamilyOfGroup", __callArgs, 2); }
        int RelationOf(void* a, void* b, void* get, int depth = 3) const { void* __callArgs[] = { a, b, get, &depth }; return CallValue<int>("RelationOf", __callArgs, 4); }
        void ChildrenOf(int id, void* dst) const { void* __callArgs[] = { &id, dst }; Call("ChildrenOf", __callArgs, 2); }
        void RootsOf(int axis, void* dst) const { void* __callArgs[] = { &axis, dst }; Call("RootsOf", __callArgs, 2); }
        int FindByName(int axis, const char* name) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { &axis, managed_1 }; return CallValue<int>("FindByName", __callArgs, 2); }
        void* PathOf(int id, const char* separator = " › ") const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(separator ? separator : "") : nullptr; void* __callArgs[] = { &id, managed_1 }; return Call("PathOf", __callArgs, 2); }
        void* WordOf(int r) const { void* __callArgs[] = { &r }; return CallStatic("WordOf", __callArgs, 1); }
    };
}
