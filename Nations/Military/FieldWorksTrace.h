#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class FieldWorksTrace : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FieldWorksTrace(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "FieldWorksTrace") {}
    public:
        int Step(float progress) const { void* __callArgs[] = { &progress }; return CallStaticValue<int>("Step", __callArgs, 1); }
        void* Get(void* w) const { void* __callArgs[] = { w }; return CallStatic("Get", __callArgs, 1); }
        void Prune(void* works) const { void* __callArgs[] = { works }; CallStatic("Prune", __callArgs, 1); }
        void ClearCache() const { CallStatic("ClearCache", nullptr, 0); }
        float TerrainCover(void* tile) const { void* __callArgs[] = { tile }; return CallStaticValue<float>("TerrainCover", __callArgs, 1); }
        void Build(void* w, void* g, void* cover) const { void* __callArgs[] = { w, g, cover }; CallStatic("Build", __callArgs, 3); }
    };
}
