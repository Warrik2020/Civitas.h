#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Rendering
{
    class MegaArmyClusters : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MegaArmyClusters(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Rendering", "MegaArmyClusters") {}
    public:
        void Build(void* militaries, void* cfg, void* space, float cellWorld, bool cull, float minX, float minY, float maxX, float maxY) const { void* __callArgs[] = { militaries, cfg, space, &cellWorld, &cull, &minX, &minY, &maxX, &maxY }; Call("Build", __callArgs, 9); }
        void CollectCell(void* mil, void* space, float cellWorld, void* world, void* into) const { void* __callArgs[] = { mil, space, &cellWorld, world, into }; CallStatic("CollectCell", __callArgs, 5); }
        void* clusters() const { return ReadField<void*>("clusters"); }
    };
}
