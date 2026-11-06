#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class PeoplesAcceptList : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeoplesAcceptList(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "PeoplesAcceptList") {}
    public:
        void Focus(int axis, int groupId) const { void* __callArgs[] = { &axis, &groupId }; Call("Focus", __callArgs, 2); }
        void Refresh(void* c) const { void* __callArgs[] = { &c }; Call("Refresh", __callArgs, 1); }
        float MinWidth() const { return ReadStaticField<float>("MinWidth"); }
        void* Root() const { return ReadField<void*>("Root"); }
    };
}
