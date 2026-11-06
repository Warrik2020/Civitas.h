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
        int Step(float progress) const { void* args[] = { &progress }; return CallStaticValue<int>("Step", args, 1); }
        void* Get(void* w) const { void* args[] = { w }; return CallStatic("Get", args, 1); }
        void Prune(void* works) const { void* args[] = { works }; CallStatic("Prune", args, 1); }
        void ClearCache() const { CallStatic("ClearCache", nullptr, 0); }
        float TerrainCover(void* tile) const { void* args[] = { tile }; return CallStaticValue<float>("TerrainCover", args, 1); }
        void Build(void* w, void* g, void* cover) const { void* args[] = { w, g, cover }; CallStatic("Build", args, 3); }
        float Next() const { return CallValue<float>("Next", nullptr, 0); }
        float Range(float a, float b) const { void* args[] = { &a, &b }; return CallValue<float>("Range", args, 2); }
        float At(float s) const { void* args[] = { &s }; return CallValue<float>("At", args, 1); }
    };
}
