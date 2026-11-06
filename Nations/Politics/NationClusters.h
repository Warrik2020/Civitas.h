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
        void FindClusters(void* n, void* grid, void* outClusters, void* stamp, int& passId) const { void* __callArgs[] = { n, grid, outClusters, &stamp, &passId }; CallStatic("FindClusters", __callArgs, 5); }
    };
}
