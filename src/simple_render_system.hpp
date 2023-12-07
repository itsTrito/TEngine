//
// Created by Tristan Brault on 2023-11-22.
//

#pragma once

#include "pipeline.hpp"
#include "game_object.hpp"
#include "frame_info.hpp"

#include <vector>


namespace te {
    class SimpleRenderSystem {
    public:
        SimpleRenderSystem(Device& device, VkRenderPass renderPass);
        ~SimpleRenderSystem();

        SimpleRenderSystem(const SimpleRenderSystem&) = delete;
        SimpleRenderSystem &operator=(const SimpleRenderSystem&) = delete;

        void renderGameObjects(FrameInfo& frameInfo, std::vector<GameObject>& gameObjects);
    private:
        void createPipelineLayout();
        void createPipeline(VkRenderPass renderPass);



        Device& device;

        std::unique_ptr<Pipeline> pipeline;
        VkPipelineLayout pipelineLayout;
    };
}



