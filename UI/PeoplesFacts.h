#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class PeoplesFacts : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeoplesFacts(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "PeoplesFacts") {}
    public:
        void* Of(void* c, int axis, void* p, void* peers) const { void* __callArgs[] = { &c, &axis, &p, peers }; return CallStatic("Of", __callArgs, 4); }
    };
}
