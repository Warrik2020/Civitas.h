#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Nobility
{
    class BaronySampler : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BaronySampler(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Nobility", "BaronySampler") {}
    public:
        bool Contains(int i) const { void* args[] = { &i }; return CallValue<bool>("Contains", args, 1); }
        float Sample(int x, int y) const { void* args[] = { &x, &y }; return CallValue<float>("Sample", args, 2); }
        bool ChunkHasData(int cx, int cy) const { void* args[] = { &cx, &cy }; return CallValue<bool>("ChunkHasData", args, 2); }
        void* Page(int cx, int cy) const { void* args[] = { &cx, &cy }; return Call("Page", args, 2); }
        bool ChunkFull(int cx, int cy) const { void* args[] = { &cx, &cy }; return CallValue<bool>("ChunkFull", args, 2); }
    };
}
