#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering
{
    class LandMesh : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LandMesh(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering", "LandMesh") {}
    public:
        void* mesh() const { return ReadField<void*>("mesh"); }
        void SetMesh(void* value) const { WriteField<void*>("mesh", value); }
        void* seaMesh() const { return ReadField<void*>("seaMesh"); }
        void SetSeaMesh(void* value) const { WriteField<void*>("seaMesh", value); }
        void* bounds() const { return ReadField<void*>("bounds"); }
        void SetBounds(void* value) const { WriteField<void*>("bounds", value); }
        int triangleCount() const { return ReadField<int>("triangleCount"); }
        void SetTriangleCount(int value) const { WriteField<int>("triangleCount", value); }
        int islandCount() const { return ReadField<int>("islandCount"); }
        void SetIslandCount(int value) const { WriteField<int>("islandCount", value); }
        int seaCount() const { return ReadField<int>("seaCount"); }
        void SetSeaCount(int value) const { WriteField<int>("seaCount", value); }
        void* space() const { return ReadField<void*>("space"); }
        void SetSpace(void* value) const { WriteField<void*>("space", value); }
        void* landGrid() const { return ReadField<void*>("landGrid"); }
        void SetLandGrid(void* value) const { WriteField<void*>("landGrid", value); }
        int gridWidth() const { return ReadField<int>("gridWidth"); }
        void SetGridWidth(int value) const { WriteField<int>("gridWidth", value); }
        int gridHeight() const { return ReadField<int>("gridHeight"); }
        void SetGridHeight(int value) const { WriteField<int>("gridHeight", value); }
        int dropped() const { return ReadField<int>("dropped"); }
        void SetDropped(int value) const { WriteField<int>("dropped", value); }
        int welded() const { return ReadField<int>("welded"); }
        void SetWelded(int value) const { WriteField<int>("welded", value); }
    };
}
