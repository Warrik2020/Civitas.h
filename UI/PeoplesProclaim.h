#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class PeoplesProclaim : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeoplesProclaim(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "PeoplesProclaim") {}
    public:
        void Candidates(void* c, int axis, void* dst) const { void* __callArgs[] = { &c, &axis, dst }; Call("Candidates", __callArgs, 3); }
        void* Outlook(void* c, int axis, int groupId, const char* name) const { void* managed_3 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { &c, &axis, &groupId, managed_3 }; return Call("Outlook", __callArgs, 4); }
        void* Proclaim(void* c, int axis, int groupId) const { void* __callArgs[] = { &c, &axis, &groupId }; return Call("Proclaim", __callArgs, 3); }
        void* BranchTip(void* c, int axis) const { void* __callArgs[] = { &c, &axis }; return Call("BranchTip", __callArgs, 2); }
        void* FoundBranch(void* c, int axis) const { void* __callArgs[] = { &c, &axis }; return Call("FoundBranch", __callArgs, 2); }
    };
}
