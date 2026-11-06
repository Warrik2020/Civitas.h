#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Naval
{
    class SeaMap : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SeaMap(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Naval", "SeaMap") {}
    public:
        void Invalidate() const { CallStatic("Invalidate", nullptr, 0); }
        int CompAt(void* grid, int tileIndex) const { void* __callArgs[] = { grid, &tileIndex }; return CallStaticValue<int>("CompAt", __callArgs, 2); }
        int SeaCount(void* grid) const { void* __callArgs[] = { grid }; return CallStaticValue<int>("SeaCount", __callArgs, 1); }
        void Prebuild(void* grid, int laneDownsample) const { void* __callArgs[] = { grid, &laneDownsample }; CallStatic("Prebuild", __callArgs, 2); }
        bool SameSea(void* grid, int a, int b) const { void* __callArgs[] = { grid, &a, &b }; return CallStaticValue<bool>("SameSea", __callArgs, 3); }
        int WaterBeside(void* grid, int landTile) const { void* __callArgs[] = { grid, &landTile }; return CallStaticValue<int>("WaterBeside", __callArgs, 2); }
        bool IsShore(void* grid, int landTile) const { void* __callArgs[] = { grid, &landTile }; return CallStaticValue<bool>("IsShore", __callArgs, 2); }
        void* BlockMask(void* grid, int s, int& nw, int& nh) const { void* __callArgs[] = { grid, &s, &nw, &nh }; return CallStatic("BlockMask", __callArgs, 4); }
        int WaterInBlock(void* grid, int bx, int by, int s) const { void* __callArgs[] = { grid, &bx, &by, &s }; return CallStaticValue<int>("WaterInBlock", __callArgs, 4); }
    };
}
