#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class PeopleOutlineOverlay : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeopleOutlineOverlay(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "PeopleOutlineOverlay") {}
    public:
        void Show(int axis, int groupId, void* area) const { void* __callArgs[] = { &axis, &groupId, area }; Call("Show", __callArgs, 3); }
        void Hide() const { Call("Hide", nullptr, 0); }
        void Tick() const { Call("Tick", nullptr, 0); }
        void Dispose() const { Call("Dispose", nullptr, 0); }
        float PresentShare() const { return ReadStaticField<float>("PresentShare"); }
    };
}
