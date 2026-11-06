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
        void* min_() const { return ReadField<void*>("min"); }
        void min_(void* value) const { WriteField<void*>("min", value); }
        void* max_() const { return ReadField<void*>("max"); }
        void max_(void* value) const { WriteField<void*>("max", value); }
        void* centre() const { return ReadField<void*>("centre"); }
        void centre(void* value) const { WriteField<void*>("centre", value); }
        float radius() const { return ReadField<float>("radius"); }
        void radius(float value) const { WriteField<float>("radius", value); }
        int cellsX() const { return ReadField<int>("cellsX"); }
        void cellsX(int value) const { WriteField<int>("cellsX", value); }
        int cellsY() const { return ReadField<int>("cellsY"); }
        void cellsY(int value) const { WriteField<int>("cellsY", value); }
        float cellsPerTile() const { return ReadField<float>("cellsPerTile"); }
        void cellsPerTile(float value) const { WriteField<float>("cellsPerTile", value); }
        int cellBase() const { return ReadField<int>("cellBase"); }
        void cellBase(int value) const { WriteField<int>("cellBase", value); }
        int buildStart() const { return ReadField<int>("buildStart"); }
        void buildStart(int value) const { WriteField<int>("buildStart", value); }
        int buildCount() const { return ReadField<int>("buildCount"); }
        void buildCount(int value) const { WriteField<int>("buildCount", value); }
        int cityId() const { return ReadField<int>("cityId"); }
        void cityId(int value) const { WriteField<int>("cityId", value); }
    };
}
