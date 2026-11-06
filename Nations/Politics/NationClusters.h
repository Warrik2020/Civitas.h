#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class NationClusters : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationClusters(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "NationClusters") {}
    public:
        void FindClusters(void* n, void* grid, void* outClusters, void* stamp, int& passId) const { void* args[] = { n, grid, outClusters, &stamp, &passId }; CallStatic("FindClusters", args, 5); }
        void Begin(void* n, void* grid, void* outSums) const { void* args[] = { n, grid, outSums }; Call("Begin", args, 3); }
        bool Step(int work) const { void* args[] = { &work }; return CallValue<bool>("Step", args, 1); }
        int count() const { return ReadField<int>("count"); }
        void SetCount(int value) const { WriteField<int>("count", value); }
        float sx() const { return ReadField<float>("sx"); }
        void SetSx(float value) const { WriteField<float>("sx", value); }
        float sy() const { return ReadField<float>("sy"); }
        void SetSy(float value) const { WriteField<float>("sy", value); }
    };
}
