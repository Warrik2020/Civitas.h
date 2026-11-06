#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class IdentitySectorBorderRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IdentitySectorBorderRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "IdentitySectorBorderRenderer") {}
    public:
        void Sync(void* groups, float iso, void* style, void* subStyle, void* edgeStyle, void* identity, int axis) const { void* __callArgs[] = { groups, &iso, style, subStyle, edgeStyle, identity, &axis }; Call("Sync", __callArgs, 7); }
        void EvictGroup(int groupId) const { void* __callArgs[] = { &groupId }; Call("EvictGroup", __callArgs, 1); }
        void SetVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetVisible", __callArgs, 1); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
    };
}
