#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class UrbanDistrict : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UrbanDistrict(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "UrbanDistrict") {}
    public:
        void* min() const { return ReadField<void*>("min"); }
        void SetMin(void* value) const { WriteField<void*>("min", value); }
        void* max() const { return ReadField<void*>("max"); }
        void SetMax(void* value) const { WriteField<void*>("max", value); }
        void* centre() const { return ReadField<void*>("centre"); }
        void SetCentre(void* value) const { WriteField<void*>("centre", value); }
        float radius() const { return ReadField<float>("radius"); }
        void SetRadius(float value) const { WriteField<float>("radius", value); }
        int cellsX() const { return ReadField<int>("cellsX"); }
        void SetCellsX(int value) const { WriteField<int>("cellsX", value); }
        int cellsY() const { return ReadField<int>("cellsY"); }
        void SetCellsY(int value) const { WriteField<int>("cellsY", value); }
        float cellsPerTile() const { return ReadField<float>("cellsPerTile"); }
        void SetCellsPerTile(float value) const { WriteField<float>("cellsPerTile", value); }
        int cellBase() const { return ReadField<int>("cellBase"); }
        void SetCellBase(int value) const { WriteField<int>("cellBase", value); }
        int buildStart() const { return ReadField<int>("buildStart"); }
        void SetBuildStart(int value) const { WriteField<int>("buildStart", value); }
        int buildCount() const { return ReadField<int>("buildCount"); }
        void SetBuildCount(int value) const { WriteField<int>("buildCount", value); }
        int cityId() const { return ReadField<int>("cityId"); }
        void SetCityId(int value) const { WriteField<int>("cityId", value); }
    };
}
