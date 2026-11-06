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
        int CompAt(void* grid, int tileIndex) const { void* args[] = { grid, &tileIndex }; return CallStaticValue<int>("CompAt", args, 2); }
        int SeaCount(void* grid) const { void* args[] = { grid }; return CallStaticValue<int>("SeaCount", args, 1); }
        void Prebuild(void* grid, int laneDownsample) const { void* args[] = { grid, &laneDownsample }; CallStatic("Prebuild", args, 2); }
        bool SameSea(void* grid, int a, int b) const { void* args[] = { grid, &a, &b }; return CallStaticValue<bool>("SameSea", args, 3); }
        int WaterBeside(void* grid, int landTile) const { void* args[] = { grid, &landTile }; return CallStaticValue<int>("WaterBeside", args, 2); }
        bool IsShore(void* grid, int landTile) const { void* args[] = { grid, &landTile }; return CallStaticValue<bool>("IsShore", args, 2); }
        void* BlockMask(void* grid, int s, int& nw, int& nh) const { void* args[] = { grid, &s, &nw, &nh }; return CallStatic("BlockMask", args, 4); }
        int WaterInBlock(void* grid, int bx, int by, int s) const { void* args[] = { grid, &bx, &by, &s }; return CallStaticValue<int>("WaterInBlock", args, 4); }
    };
}
