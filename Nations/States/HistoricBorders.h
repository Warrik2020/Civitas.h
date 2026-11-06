#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::States
{
    class HistoricBorders : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit HistoricBorders(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.States", "HistoricBorders") {}
    public:
        void* Load(void* map, int gridW, int gridH, int& pocketTiles) const { void* args[] = { map, &gridW, &gridH, &pocketTiles }; return CallStatic("Load", args, 4); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
    };
}
