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
        void* Get(int id) const { void* args[] = { &id }; return Call("Get", args, 1); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void* Add(int axis, const char* name, int parentId, void* fill, bool grand = false) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { &axis, managed_1, &parentId, fill, &grand }; return Call("Add", args, 5); }
        void TouchVersion() const { Call("TouchVersion", nullptr, 0); }
        void Rename(int id, const char* name) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { &id, managed_1 }; Call("Rename", args, 2); }
        bool HasAny(int axis) const { void* args[] = { &axis }; return CallValue<bool>("HasAny", args, 1); }
        int ParentOf(int id) const { void* args[] = { &id }; return CallValue<int>("ParentOf", args, 1); }
        int DepthOf(int id) const { void* args[] = { &id }; return CallValue<int>("DepthOf", args, 1); }
        int RootOf(int id) const { void* args[] = { &id }; return CallValue<int>("RootOf", args, 1); }
        int AncestorAtDepth(int id, int depth) const { void* args[] = { &id, &depth }; return CallValue<int>("AncestorAtDepth", args, 2); }
        int MapNodeOf(int node, bool broadest) const { void* args[] = { &node, &broadest }; return CallValue<int>("MapNodeOf", args, 2); }
        int MapStepsOf(int node) const { void* args[] = { &node }; return CallValue<int>("MapStepsOf", args, 1); }
        int MapNodeAtLevel(int node, int level) const { void* args[] = { &node, &level }; return CallValue<int>("MapNodeAtLevel", args, 2); }
        bool IsUnder(int id, int ancestor) const { void* args[] = { &id, &ancestor }; return CallValue<bool>("IsUnder", args, 2); }
        int Lca(int a, int b) const { void* args[] = { &a, &b }; return CallValue<int>("Lca", args, 2); }
        int RelationOfNodes(int a, int b) const { void* args[] = { &a, &b }; return CallValue<int>("RelationOfNodes", args, 2); }
        int FamilyOfGroup(void* g, void* get) const { void* args[] = { g, get }; return CallStaticValue<int>("FamilyOfGroup", args, 2); }
        int RelationOf(void* a, void* b, void* get, int depth = 3) const { void* args[] = { a, b, get, &depth }; return CallValue<int>("RelationOf", args, 4); }
        void ChildrenOf(int id, void* dst) const { void* args[] = { &id, dst }; Call("ChildrenOf", args, 2); }
        void RootsOf(int axis, void* dst) const { void* args[] = { &axis, dst }; Call("RootsOf", args, 2); }
        int FindByName(int axis, const char* name) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { &axis, managed_1 }; return CallValue<int>("FindByName", args, 2); }
        void* PathOf(int id, const char* separator = " › ") const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(separator ? separator : "") : nullptr; void* args[] = { &id, managed_1 }; return Call("PathOf", args, 2); }
        void* WordOf(int r) const { void* args[] = { &r }; return CallStatic("WordOf", args, 1); }
    };
}
