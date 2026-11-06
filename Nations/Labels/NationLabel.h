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
        void nationId(int value) const { WriteField<int>("nationId", value); }
        void* tr() const { return ReadField<void*>("tr"); }
        void tr(void* value) const { WriteField<void*>("tr", value); }
        void* tmp() const { return ReadField<void*>("tmp"); }
        void tmp(void* value) const { WriteField<void*>("tmp", value); }
        bool hasFit() const { return ReadField<bool>("hasFit"); }
        void hasFit(bool value) const { WriteField<bool>("hasFit", value); }
        float worldTextHeight() const { return ReadField<float>("worldTextHeight"); }
        void worldTextHeight(float value) const { WriteField<float>("worldTextHeight", value); }
        float lastAlpha() const { return ReadField<float>("lastAlpha"); }
        void lastAlpha(float value) const { WriteField<float>("lastAlpha", value); }
        void* spinePts() const { return ReadField<void*>("spinePts"); }
        void spinePts(void* value) const { WriteField<void*>("spinePts", value); }
        void* spineCum() const { return ReadField<void*>("spineCum"); }
        void spineCum(void* value) const { WriteField<void*>("spineCum", value); }
        int spineCount() const { return ReadField<int>("spineCount"); }
        void spineCount(int value) const { WriteField<int>("spineCount", value); }
        float warpXMin() const { return ReadField<float>("warpXMin"); }
        void warpXMin(float value) const { WriteField<float>("warpXMin", value); }
        float warpYMid() const { return ReadField<float>("warpYMid"); }
        void warpYMid(float value) const { WriteField<float>("warpYMid", value); }
        float warpScale() const { return ReadField<float>("warpScale"); }
        void warpScale(float value) const { WriteField<float>("warpScale", value); }
        float warpStartArc() const { return ReadField<float>("warpStartArc"); }
        void warpStartArc(float value) const { WriteField<float>("warpStartArc", value); }
        int groundMinX() const { return ReadField<int>("groundMinX"); }
        void groundMinX(int value) const { WriteField<int>("groundMinX", value); }
        int groundMinY() const { return ReadField<int>("groundMinY"); }
        void groundMinY(int value) const { WriteField<int>("groundMinY", value); }
        int groundMaxX() const { return ReadField<int>("groundMaxX"); }
        void groundMaxX(int value) const { WriteField<int>("groundMaxX", value); }
        int groundMaxY() const { return ReadField<int>("groundMaxY"); }
        void groundMaxY(int value) const { WriteField<int>("groundMaxY", value); }
        int groundTilesAtFit() const { return ReadField<int>("groundTilesAtFit"); }
        void groundTilesAtFit(int value) const { WriteField<int>("groundTilesAtFit", value); }
        int groundLosses() const { return ReadField<int>("groundLosses"); }
        void groundLosses(int value) const { WriteField<int>("groundLosses", value); }
    };
}
