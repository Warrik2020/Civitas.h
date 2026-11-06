#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Terrain
{
    class TerrainSurfaceData : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TerrainSurfaceData(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Terrain", "TerrainSurfaceData") {}
    public:
        float ElevationAt(float x, float y) const { void* args[] = { &x, &y }; return CallValue<float>("ElevationAt", args, 2); }
        float TemperatureAt(float x, float y) const { void* args[] = { &x, &y }; return CallValue<float>("TemperatureAt", args, 2); }
        float MoistureAt(float x, float y) const { void* args[] = { &x, &y }; return CallValue<float>("MoistureAt", args, 2); }
        uint8_t At(int x, int y) const { void* args[] = { &x, &y }; return CallValue<uint8_t>("At", args, 2); }
        int width() const { return ReadField<int>("width"); }
        void SetWidth(int value) const { WriteField<int>("width", value); }
        int height() const { return ReadField<int>("height"); }
        void SetHeight(int value) const { WriteField<int>("height", value); }
        void* terrain() const { return ReadField<void*>("terrain"); }
        void SetTerrain(void* value) const { WriteField<void*>("terrain", value); }
        int cellsWide() const { return ReadField<int>("cellsWide"); }
        void SetCellsWide(int value) const { WriteField<int>("cellsWide", value); }
        int cellsHigh() const { return ReadField<int>("cellsHigh"); }
        void SetCellsHigh(int value) const { WriteField<int>("cellsHigh", value); }
        int cellStep() const { return ReadField<int>("cellStep"); }
        void SetCellStep(int value) const { WriteField<int>("cellStep", value); }
        void* elevationM() const { return ReadField<void*>("elevationM"); }
        void SetElevationM(void* value) const { WriteField<void*>("elevationM", value); }
        void* temperatureC() const { return ReadField<void*>("temperatureC"); }
        void SetTemperatureC(void* value) const { WriteField<void*>("temperatureC", value); }
        void* moisture() const { return ReadField<void*>("moisture"); }
        void SetMoisture(void* value) const { WriteField<void*>("moisture", value); }
        void* geo() const { return ReadField<void*>("geo"); }
        void SetGeo(void* value) const { WriteField<void*>("geo", value); }
        void* sourceTag() const { return ReadField<void*>("sourceTag"); }
        void SetSourceTag(void* value) const { WriteField<void*>("sourceTag", value); }
        void* coverCounts() const { return ReadField<void*>("coverCounts"); }
        void SetCoverCounts(void* value) const { WriteField<void*>("coverCounts", value); }
        int landTiles() const { return ReadField<int>("landTiles"); }
        void SetLandTiles(int value) const { WriteField<int>("landTiles", value); }
        void* reliefCounts() const { return ReadField<void*>("reliefCounts"); }
        void SetReliefCounts(void* value) const { WriteField<void*>("reliefCounts", value); }
    };
}
