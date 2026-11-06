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
        void Show(int axis, int groupId, void* area) const { void* args[] = { &axis, &groupId, area }; Call("Show", args, 3); }
        void Hide() const { Call("Hide", nullptr, 0); }
        void Tick() const { Call("Tick", nullptr, 0); }
        void Dispose() const { Call("Dispose", nullptr, 0); }
        float Sample(int x, int y) const { void* args[] = { &x, &y }; return CallValue<float>("Sample", args, 2); }
        bool ChunkHasData(int cx, int cy) const { void* args[] = { &cx, &cy }; return CallValue<bool>("ChunkHasData", args, 2); }
        void* Page(int cx, int cy) const { void* args[] = { &cx, &cy }; return Call("Page", args, 2); }
        bool ChunkFull(int cx, int cy) const { void* args[] = { &cx, &cy }; return CallValue<bool>("ChunkFull", args, 2); }
        float PresentShare() const { return ReadStaticField<float>("PresentShare"); }
    };
}
