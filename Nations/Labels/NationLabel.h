#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Labels
{
    class NationLabel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationLabel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Labels", "NationLabel") {}
    public:
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        void* tr() const { return ReadField<void*>("tr"); }
        void SetTr(void* value) const { WriteField<void*>("tr", value); }
        void* tmp() const { return ReadField<void*>("tmp"); }
        void SetTmp(void* value) const { WriteField<void*>("tmp", value); }
        bool hasFit() const { return ReadField<bool>("hasFit"); }
        void SetHasFit(bool value) const { WriteField<bool>("hasFit", value); }
        float worldTextHeight() const { return ReadField<float>("worldTextHeight"); }
        void SetWorldTextHeight(float value) const { WriteField<float>("worldTextHeight", value); }
        float lastAlpha() const { return ReadField<float>("lastAlpha"); }
        void SetLastAlpha(float value) const { WriteField<float>("lastAlpha", value); }
        void* spinePts() const { return ReadField<void*>("spinePts"); }
        void SetSpinePts(void* value) const { WriteField<void*>("spinePts", value); }
        void* spineCum() const { return ReadField<void*>("spineCum"); }
        void SetSpineCum(void* value) const { WriteField<void*>("spineCum", value); }
        int spineCount() const { return ReadField<int>("spineCount"); }
        void SetSpineCount(int value) const { WriteField<int>("spineCount", value); }
        float warpXMin() const { return ReadField<float>("warpXMin"); }
        void SetWarpXMin(float value) const { WriteField<float>("warpXMin", value); }
        float warpYMid() const { return ReadField<float>("warpYMid"); }
        void SetWarpYMid(float value) const { WriteField<float>("warpYMid", value); }
        float warpScale() const { return ReadField<float>("warpScale"); }
        void SetWarpScale(float value) const { WriteField<float>("warpScale", value); }
        float warpStartArc() const { return ReadField<float>("warpStartArc"); }
        void SetWarpStartArc(float value) const { WriteField<float>("warpStartArc", value); }
        int groundMinX() const { return ReadField<int>("groundMinX"); }
        void SetGroundMinX(int value) const { WriteField<int>("groundMinX", value); }
        int groundMinY() const { return ReadField<int>("groundMinY"); }
        void SetGroundMinY(int value) const { WriteField<int>("groundMinY", value); }
        int groundMaxX() const { return ReadField<int>("groundMaxX"); }
        void SetGroundMaxX(int value) const { WriteField<int>("groundMaxX", value); }
        int groundMaxY() const { return ReadField<int>("groundMaxY"); }
        void SetGroundMaxY(int value) const { WriteField<int>("groundMaxY", value); }
        int groundTilesAtFit() const { return ReadField<int>("groundTilesAtFit"); }
        void SetGroundTilesAtFit(int value) const { WriteField<int>("groundTilesAtFit", value); }
        int groundLosses() const { return ReadField<int>("groundLosses"); }
        void SetGroundLosses(int value) const { WriteField<int>("groundLosses", value); }
    };
}
